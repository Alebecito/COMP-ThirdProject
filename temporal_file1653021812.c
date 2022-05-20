














typedef enum {
  TC_EMPTY, TC_CELLI, TC_CELLJ, TC_CELLL, TC_CELLO, TC_CELLS, TC_CELLT, TC_CELLZ
} tetris_cell;


typedef enum {
  TET_I, TET_J, TET_L, TET_O, TET_S, TET_T, TET_Z
} tetris_type;


typedef struct {
  int row;
  int col;
} tetris_location;


typedef struct {
  int typ;
  int ori;
  tetris_location loc;
} tetris_block;


typedef enum {
  TM_LEFT, TM_RIGHT, TM_CLOCK, TM_COUNTER, TM_DROP, TM_HOLD, TM_NONE
} tetris_move;


typedef struct {
  
  int rows;
  int cols;
  char *board;
  
  int points;
  int level;
  
  tetris_block falling;
  tetris_block next;
  tetris_block stored;
  
  int ticks_till_gravity;
  
  int lines_remaining;
} tetris_game;


extern tetris_location TETROMINOS[7][4][4];


extern int GRAVITY_LEVEL[19+1];


void tg_init(tetris_game *obj, int rows, int cols);
tetris_game *tg_create(int rows, int cols);
void tg_destroy(tetris_game *obj);
void tg_delete(tetris_game *obj);
tetris_game *tg_load(FILE *f);
void tg_save(tetris_game *obj, FILE *f);


char tg_get(tetris_game *obj, int row, int col);
int tg_check(tetris_game *obj, int row, int col);
int tg_tick(tetris_game *obj, tetris_move move);
void tg_print(tetris_game *obj, FILE *f);





tetris_location TETROMINOS[7][4][4] = {
  
  {{{1, 0}, {1, 1}, {1, 2}, {1, 3}},
   {{0, 2}, {1, 2}, {2, 2}, {3, 2}},
   {{3, 0}, {3, 1}, {3, 2}, {3, 3}},
   {{0, 1}, {1, 1}, {2, 1}, {3, 1}}},
  
  {{{0, 0}, {1, 0}, {1, 1}, {1, 2}},
   {{0, 1}, {0, 2}, {1, 1}, {2, 1}},
   {{1, 0}, {1, 1}, {1, 2}, {2, 2}},
   {{0, 1}, {1, 1}, {2, 0}, {2, 1}}},
  
  {{{0, 2}, {1, 0}, {1, 1}, {1, 2}},
   {{0, 1}, {1, 1}, {2, 1}, {2, 2}},
   {{1, 0}, {1, 1}, {1, 2}, {2, 0}},
   {{0, 0}, {0, 1}, {1, 1}, {2, 1}}},
  
  {{{0, 1}, {0, 2}, {1, 1}, {1, 2}},
   {{0, 1}, {0, 2}, {1, 1}, {1, 2}},
   {{0, 1}, {0, 2}, {1, 1}, {1, 2}},
   {{0, 1}, {0, 2}, {1, 1}, {1, 2}}},
  
  {{{0, 1}, {0, 2}, {1, 0}, {1, 1}},
   {{0, 1}, {1, 1}, {1, 2}, {2, 2}},
   {{1, 1}, {1, 2}, {2, 0}, {2, 1}},
   {{0, 0}, {1, 0}, {1, 1}, {2, 1}}},
  
  {{{0, 1}, {1, 0}, {1, 1}, {1, 2}},
   {{0, 1}, {1, 1}, {1, 2}, {2, 1}},
   {{1, 0}, {1, 1}, {1, 2}, {2, 1}},
   {{0, 1}, {1, 0}, {1, 1}, {2, 1}}},
  
  {{{0, 0}, {0, 1}, {1, 1}, {1, 2}},
   {{0, 2}, {1, 1}, {1, 2}, {2, 1}},
   {{1, 0}, {1, 1}, {2, 1}, {2, 2}},
   {{0, 1}, {1, 0}, {1, 1}, {2, 0}}},
};

int GRAVITY_LEVEL[19+1] = {

  50, 48, 46, 44, 42, 40, 38, 36, 34, 32,

  30, 28, 26, 24, 22, 20, 16, 12,  8,  4
};




char tg_get(tetris_game *obj, int row, int column)
{
  return obj->board[obj->cols * row + column];
}


static void tg_set(tetris_game *obj, int row, int column, char value)
{
  obj->board[obj->cols * row + column] = value;
}


int tg_check(tetris_game *obj, int row, int col)
{
  return 0 <= row && row < obj->rows && 0 <= col && col < obj->cols;
}


static void tg_put(tetris_game *obj, tetris_block block)
{
  int i;
  for (i = 0; i < 4; i++) {
    tetris_location cell = TETROMINOS[block.typ][block.ori][i];
    tg_set(obj, block.loc.row + cell.row, block.loc.col + cell.col,
           (x) ((x)+1)(block.typ));
  }
}


static void tg_remove(tetris_game *obj, tetris_block block)
{
  int i;
  for (i = 0; i < 4; i++) {
    tetris_location cell = TETROMINOS[block.typ][block.ori][i];
    tg_set(obj, block.loc.row + cell.row, block.loc.col + cell.col, TC_EMPTY);
  }
}


static int tg_fits(tetris_game *obj, tetris_block block)
{
  int i, r, c;
  for (i = 0; i < 4; i++) {
    tetris_location cell = TETROMINOS[block.typ][block.ori][i];
    r = block.loc.row + cell.row;
    c = block.loc.col + cell.col;
    if (!tg_check(obj, r, c) || (x) (!(x) ((x) == TC_EMPTY)(x))(tg_get(obj, r, c))) {
      return 0;
    }
  }
  return 1;
}


static int random_tetromino(void) {
  return rand() % 7;
}


static void tg_new_falling(tetris_game *obj)
{
  
  obj->falling = obj->next;
  obj->next.typ = random_tetromino();
  obj->next.ori = 0;
  obj->next.loc.row = 0;
  obj->next.loc.col = obj->cols/2 - 2;
}




static void tg_do_gravity_tick(tetris_game *obj)
{
  obj->ticks_till_gravity--;
  if (obj->ticks_till_gravity <= 0) {
    tg_remove(obj, obj->falling);
    obj->falling.loc.row++;
    if (tg_fits(obj, obj->falling)) {
      obj->ticks_till_gravity = GRAVITY_LEVEL[obj->level];
    } else {
      obj->falling.loc.row--;
      tg_put(obj, obj->falling);

      tg_new_falling(obj);
    }
    tg_put(obj, obj->falling);
  }
}


static void tg_move(tetris_game *obj, int direction)
{
  tg_remove(obj, obj->falling);
  obj->falling.loc.col += direction;
  if (!tg_fits(obj, obj->falling)) {
    obj->falling.loc.col -= direction;
  }
  tg_put(obj, obj->falling);
}


static void tg_down(tetris_game *obj)
{
  tg_remove(obj, obj->falling);
  while (tg_fits(obj, obj->falling)) {
    obj->falling.loc.row++;
  }
  obj->falling.loc.row--;
  tg_put(obj, obj->falling);
  tg_new_falling(obj);
}


static void tg_rotate(tetris_game *obj, int direction)
{
  tg_remove(obj, obj->falling);

  while (1) {
    obj->falling.ori = (obj->falling.ori + direction) % 4;

    
    if (tg_fits(obj, obj->falling))
      break;

    
    obj->falling.loc.col--;
    if (tg_fits(obj, obj->falling))
      break;

    
    obj->falling.loc.col += 2;
    if (tg_fits(obj, obj->falling))
      break;

    
    obj->falling.loc.col--;
    
    
  }

  tg_put(obj, obj->falling);
}


static void tg_hold(tetris_game *obj)
{
  tg_remove(obj, obj->falling);
  if (obj->stored.typ == -1) {
    obj->stored = obj->falling;
    tg_new_falling(obj);
  } else {
    int typ = obj->falling.typ, ori = obj->falling.ori;
    obj->falling.typ = obj->stored.typ;
    obj->falling.ori = obj->stored.ori;
    obj->stored.typ = typ;
    obj->stored.ori = ori;
    while (!tg_fits(obj, obj->falling)) {
      obj->falling.loc.row--;
    }
  }
  tg_put(obj, obj->falling);
}


static void tg_handle_move(tetris_game *obj, tetris_move move)
{
  switch (move) {
  case TM_LEFT:
    tg_move(obj, -1);
    break;
  case TM_RIGHT:
    tg_move(obj, 1);
    break;
  case TM_DROP:
    tg_down(obj);
    break;
  case TM_CLOCK:
    tg_rotate(obj, 1);
    break;
  case TM_COUNTER:
    tg_rotate(obj, -1);
    break;
  case TM_HOLD:
    tg_hold(obj);
    break;
  default:
    
    break;
  }
}


static int tg_line_full(tetris_game *obj, int i)
{
  int j;
  for (j = 0; j < obj->cols; j++) {
    if ((x) ((x) == TC_EMPTY)(tg_get(obj, i, j)))
      return 0;
  }
  return 1;
}


static void tg_shift_lines(tetris_game *obj, int r)
{
  int i, j;
  for (i = r-1; i >= 0; i--) {
    for (j = 0; j < obj->cols; j++) {
      tg_set(obj, i+1, j, tg_get(obj, i, j));
      tg_set(obj, i, j, TC_EMPTY);
    }
  }
}


static int tg_check_lines(tetris_game *obj)
{
  int i, nlines = 0;
  tg_remove(obj, obj->falling); 

  for (i = obj->rows-1; i >= 0; i--) {
    if (tg_line_full(obj, i)) {
      tg_shift_lines(obj, i);
      i++; 
      nlines++;
    }
  }

  tg_put(obj, obj->falling); 
  return nlines;
}


static void tg_adjust_score(tetris_game *obj, int lines_cleared)
{
  static int line_multiplier[] = {0, 40, 100, 300, 1200};
  obj->points += line_multiplier[lines_cleared] * (obj->level + 1);
  if (lines_cleared >= obj->lines_remaining) {
    obj->level = (X,Y) ((X) < (Y) ? (X) : (Y))(19, obj->level + 1);
    lines_cleared -= obj->lines_remaining;
    obj->lines_remaining = 10 - lines_cleared;
  } else {
    obj->lines_remaining -= lines_cleared;
  }
}


static int tg_game_over(tetris_game *obj)
{
  int i, j;
  int over = 0;
  tg_remove(obj, obj->falling);
  for (i = 0; i < 2; i++) {
    for (j = 0; j < obj->cols; j++) {
      if ((x) (!(x) ((x) == TC_EMPTY)(x))(tg_get(obj, i, j))) {
        over = 1;
      }
    }
  }
  tg_put(obj, obj->falling);
  return over;
}




int tg_tick(tetris_game *obj, tetris_move move)
{
  int lines_cleared;
  
  tg_do_gravity_tick(obj);

  
  tg_handle_move(obj, move);

  
  lines_cleared = tg_check_lines(obj);

  tg_adjust_score(obj, lines_cleared);

  
  return !tg_game_over(obj);
}

void tg_init(tetris_game *obj, int rows, int cols)
{
  
  obj->rows = rows;
  obj->cols = cols;
  obj->board = malloc(rows * cols);
  memset(obj->board, TC_EMPTY, rows * cols);
  obj->points = 0;
  obj->level = 0;
  obj->ticks_till_gravity = GRAVITY_LEVEL[obj->level];
  obj->lines_remaining = 10;
  srand(time(NULL));
  tg_new_falling(obj);
  tg_new_falling(obj);
  obj->stored.typ = -1;
  obj->stored.ori = 0;
  obj->stored.loc.row = 0;
  obj->next.loc.col = obj->cols/2 - 2;
  printf("%d", obj->falling.loc.col);
}

tetris_game *tg_create(int rows, int cols)
{
  tetris_game *obj = malloc(sizeof(tetris_game));
  tg_init(obj, rows, cols);
  return obj;
}

void tg_destroy(tetris_game *obj)
{
  
  free(obj->board);
}

void tg_delete(tetris_game *obj) {
  tg_destroy(obj);
  free(obj);
}


tetris_game *tg_load(FILE *f)
{
  tetris_game *obj = malloc(sizeof(tetris_game));
  fread(obj, sizeof(tetris_game), 1, f);
  obj->board = malloc(obj->rows * obj->cols);
  fread(obj->board, sizeof(char), obj->rows * obj->cols, f);
  return obj;
}


void tg_save(tetris_game *obj, FILE *f)
{
  fwrite(obj, sizeof(tetris_game), 1, f);
  fwrite(obj->board, sizeof(char), obj->rows * obj->cols, f);
}


void tg_print(tetris_game *obj, FILE *f) {
  int i, j;
  for (i = 0; i < obj->rows; i++) {
    for (j = 0; j < obj->cols; j++) {
      if ((x) ((x) == TC_EMPTY)(tg_get(obj, i, j))) {
        fputs(" ", f);
      } else {
        fputs("\u2588", f);
      }
    }
    fputc('\n', f);
  }
}
