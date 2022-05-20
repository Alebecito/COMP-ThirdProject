

						






static int  g_useColor = 1;
static int  g_playing = 0;
static int  g_useHighlights = 0;
static char* g_provided_stream = NULL;		
static int   g_hint_counter;
static char  plain_board[STREAM_LENGTH];
static char  user_board[STREAM_LENGTH];
static char* g_outputFilename = NULL;		
static int   g_sudokuCount = 1;				
static int  g_outIsPDF;
static DIFFICULTY g_level = D_EASY;
static WINDOW *grid, *infobox, *status;

int is_valid_puzzle(char puzzle[STREAM_LENGTH])
{
	int rowEntry, colEntry, squareEntry;

	int rowEntryCounter[9] = {0};
	int colEntryCounter[9] = {0};
	int squareEntryCounter[9] = {0};

	for(int row=0; row<9; row++)
	{
		
		for (int col=0; col<9; col++)
		{
			
			rowEntry = puzzle[row * 9 + col];
			colEntry = puzzle[col * 9 + row];
			squareEntry = puzzle[(((row % 3) + (row / 3) * 9) * 3 ) + (col % 3 + (col / 3) * 9)];
			
			
			
			if (rowEntry != '.')
			{
				rowEntryCounter[rowEntry - 49]++;
			}
			if (colEntry!= '.')
			{
				colEntryCounter[colEntry - 49]++;
			}
			if (squareEntry != '.')
			{
				squareEntryCounter[squareEntry - 49]++;
			}
		}
		
		for (int i = 0; i < 9; i++)
		{
			if (rowEntryCounter[i] > 1 || colEntryCounter[i] > 1 || squareEntryCounter[i] > 1)
				return 0;
			rowEntryCounter[i] = 0;
			colEntryCounter[i] = 0;
			squareEntryCounter[i] = 0;
		}
	}
	return 1;
}


static int is_available(char puzzle[STREAM_LENGTH], int row, int col, int num)
{
	int i;
	int rowStart = (row/3) * 3;
	int colStart = (col/3) * 3;

	num += 48;

	for (i=0; i<9; i++)
	{
		if (puzzle[row * 9 + i] == num)
			return 0;
		if (puzzle[i * 9 + col] == num)
			return 0;
		if (puzzle[(rowStart + (i % 3)) * 9 + (colStart + (i / 3))] == num)
			return 0;
	}
	return 1;
}

static int solve_recursively(char puzzle[STREAM_LENGTH], int row, int col)
{
	if (row < 9 && col < 9)
	{
		if (puzzle[row * 9 + col] != '.')
		{
			if ((col + 1) < 9)
				return solve_recursively(puzzle, row, col + 1);
			else if ((row + 1) < 9)
				return solve_recursively(puzzle, row + 1, 0);
			else
				return 1;
		}
		else
		{
			for (int i = 0; i < 9; i++)
			{
				if(is_available(puzzle, row, col, i + 1))
				{
					puzzle[row * 9 + col] = i + 1 + 48;

					if(solve_recursively(puzzle, row, col))
						return 1;
					else
						puzzle[row * 9 + col] = '.';
				}
			}
		}
		return 0;
	}
	else
		return 1;
}

int solve(char puzzle[STREAM_LENGTH])
{
	if (is_valid_puzzle(puzzle))
		return solve_recursively(puzzle, 0, 0);
	else
		return 0;
}



static int rand_int(int n) {
	int rnd;
	int limit = RAND_MAX - RAND_MAX % n;

	do {
		rnd = rand();
	} while (rnd >= limit);
	return (rnd % n);
}

static void shuffle(char *array, int n) {
	int i, j;
	char tmp;

	for (i = n - 1; i > 0; i--)
	{
		j = rand_int(i + 1);
		tmp = array[j];
		array[j] = array[i];
		array[i] = tmp;
	}
}

static char* create_random_numbers()
{
	char numbers[10] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '\0'};
	shuffle(numbers, 9);
	return strdup(numbers);
}

static char* generate_seed()
{
	char *stream = (char*)malloc(STREAM_LENGTH);
	int index = 0;
	int iSquare = 0;

	char* upperleft = create_random_numbers();
	char* center = create_random_numbers();
	char* lowerright = create_random_numbers();

	
	for (int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
			stream[index++] = upperleft[iSquare++];
		for(int j = 0; j < 6 ; j++)
			stream[index++] = '.';
	}
	iSquare = 0;
	
	for (int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3 ; j++)
			stream[index++] = '.';
		for(int j = 0; j < 3; j++)
			stream[index++] = center[iSquare++];
		for(int j = 0; j < 3 ; j++)
			stream[index++] = '.';
	}
	iSquare = 0;
	
	for (int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 6 ; j++)
			stream[index++] = '.';
		for(int j = 0; j < 3; j++)
			stream[index++] = lowerright[iSquare++];
	}

	stream[81] = '\0';

	free(upperleft);
	free(center);
	free(lowerright);

	return stream;
}

static void punch_holes(char *stream, int count)
{
	int i = 0;
	while(i < count)
	{
		int random = rand() % 80 + 1;
		if (stream[random] != '.')
		{
			stream[random] = '.';
			i++;
		}
	}
}

const char* difficulty_to_str(DIFFICULTY level)
{
	switch(level)
	{
		case D_HARD:
			return (x) gettext(x)("hard");
		case D_NORMAL:
			return (x) gettext(x)("normal");
		case D_EASY:
		default:
			return (x) gettext(x)("easy");
	}
}

char* generate_puzzle(int holes)
{
	char* stream;

	stream = generate_seed();
	solve(stream);
	punch_holes(stream, holes);
	return stream;
}


static void print_version(void)
{
	printf("nudoku version " VERSION "\n\n\
Copyright (C) Michael Vetter 2014 - 2020\n\
License GPLv3+: GNU GPL version 3 or later.\n\
This is free software, you are free to modify and redistribute it.\n");
#ifdef DEBUG
	printf("Debug enabled\n");
#endif 
}

static void print_usage(void)
{
	printf((x) gettext(x)("nudoku [option]\n\n"));
	printf((x) gettext(x)("Options:\n"));
	printf((x) gettext(x)("-h help:\t\tPrint this help\n"));
	printf((x) gettext(x)("-v version:\t\tPrint version\n"));
	printf((x) gettext(x)("-c nocolor:\t\tDo not use colors\n"));
	printf((x) gettext(x)("-d difficulty:\t\tChoose between: easy, normal, hard\n"));
	printf((x) gettext(x)("-s stream:\t\tUser provided sudoku stream\n"));
	printf((x) gettext(x)("-p filename:\t\tOutput PDF\n"));
	printf((x) gettext(x)("-n filename:\t\tNumber of sudokus to put in PDF\n"));
	printf((x) gettext(x)("-i filename:\t\tOutput PNG image\n"));
}

static int is_valid_stream(char *s)
{
	char *p = s;
	short n = 0;
	while ((*p) != '\0')
	{
		if (n++ > STREAM_LENGTH - 1)
			break;

		if(!((*p >= 49 && *p <= 57) || *p == '.' ))
		{
			printf((x) gettext(x)("Character %c at position %d is not allowed.\n"), *p, n);
			return 0;
		}
		p++;
	}

	if (n != STREAM_LENGTH - 1 )
	{
		printf((x) gettext(x)("Stream has to be %d characters long.\n"), STREAM_LENGTH - 1);
		return 0;
	}

	if (!is_valid_puzzle(s))
	{
		printf((x) gettext(x)("Stream does not represent a valid sudoku puzzle.\n"));
		return 0;
	}

	return 1;
}

static void parse_arguments(int argc, char *argv[])
{
	int opt;
	while ((opt = getopt(argc, argv, "hvcs:d:p:i:n:")) != -1)
	{
		switch (opt)
		{
			case 'h':
				print_usage();
				exit(EXIT_SUCCESS);
			case 'v':
				print_version();
				exit(EXIT_SUCCESS);
			case 'c':
				g_useColor = 0;
				break;
			case 's':
				if (!is_valid_stream(optarg))
					exit(EXIT_FAILURE);
				g_provided_stream = strdup(optarg);
				break;
			case 'd':
				if (strcmp(optarg, "easy") == 0)
					g_level = D_EASY;
				else if (strcmp(optarg, "normal") == 0)
					g_level = D_NORMAL;
				else if (strcmp(optarg, "hard") == 0)
					g_level = D_HARD;
				else
				{
					print_usage();
					exit(EXIT_FAILURE);
				}
				break;
			
			case 'p':
				g_outputFilename = strdup(optarg);
				g_outIsPDF = 1;
				break;
			
			case 'i':
				g_outputFilename = strdup(optarg);
				g_outIsPDF = 0;
				break;
			
			case 'n':
				g_sudokuCount = atoi(optarg);
				break;
			default:
				print_usage();
				exit(EXIT_FAILURE);
		}
	}
}

static void cleanup(void)
{
	endwin();
}

static void init_curses(void)
{
	initscr();
	use_default_colors();
	clear();
	atexit(cleanup);
	cbreak();
	noecho();

	if(g_useColor)
	{
		if(has_colors())
		{
			start_color();
			init_pair(1, COLOR_GREEN, -1);
			init_pair(2, COLOR_BLUE, -1);
			
			init_pair(3, COLOR_CYAN, -1);
			
			init_pair(4, COLOR_BLACK, COLOR_WHITE);
			
			init_pair(5, COLOR_BLACK, COLOR_MAGENTA);
		}
		else
		{
			printw( (x) gettext(x)("Your terminal doesn't support colors.\nTry the nocolor (-c) option.\n"));
			getch();
			exit(EXIT_FAILURE);
		}
	}
}

static void _draw_grid()
{
	int i, j;

	for(i = 0;i < 10;i++)
	{
		for(j = 0;j < 10;j++)
		{
			if (g_useColor)
			{
				if(i % 3 == 0)
					wattron(grid, A_BOLD|COLOR_PAIR(2));
				if(j % 3 == 0)
					wattron(grid, A_BOLD|COLOR_PAIR(2));
			}

			if(i == 0 && j == 0)
				waddch(grid, ACS_ULCORNER);
			else if(i == 0 && j == 9)
				waddch(grid, ACS_URCORNER);
			else if(i == 9 && j == 9)
				waddch(grid, ACS_LRCORNER);
			else if(i == 9 && j == 0)
				waddch(grid, ACS_LLCORNER);
			else if(i == 0)
				waddch(grid, ACS_TTEE);
			else if(i == 9)
				waddch(grid, ACS_BTEE);
			else if(j == 0)
				waddch(grid, ACS_LTEE);
			else if(j == 9)
				waddch(grid, ACS_RTEE);
			else
				waddch(grid, ACS_PLUS);

			if(g_useColor && (j % 3 == 0) && (i % 3 != 0))
			{
				wattron(grid, A_BOLD|COLOR_PAIR(1));
			}
			if(j < 9)
			{
				waddch(grid, ACS_HLINE);
				waddch(grid, ACS_HLINE);
				waddch(grid, ACS_HLINE);
			}
			if(g_useColor && (i % 3 == 0))
			{
				wattron(grid, A_BOLD|COLOR_PAIR(1));
			}
		}
		for(j = 0;j < 10 && i < 9;j++)
		{
			if(g_useColor && (j % 3 == 0))
				wattron(grid, A_BOLD|COLOR_PAIR(2));
			if(j > 0)
				wprintw(grid, "   ");
			waddch(grid, ACS_VLINE);
			if(g_useColor && (j % 3 == 0))
			{
				wattron(grid, A_BOLD|COLOR_PAIR(1));
			}
		}
	}
}

static void init_windows(void)
{
	keypad(stdscr, 1);

	status = newwin(1, 37 + 30, 1, 3);

	grid = newwin(19, 37, 3, 3);
	_draw_grid();

	infobox = newwin(25, 30, 3, 3 + 37 + 5);
	if (g_useColor)
	{
		wbkgd(infobox, COLOR_PAIR(2));
		wattron(infobox, A_BOLD|COLOR_PAIR(2));
	}

	wprintw(infobox, "nudoku %s\n", VERSION);

	if (!g_provided_stream)
		wprintw(infobox, (x) gettext(x)("level: %s\n\n"), difficulty_to_str(g_level) );
	else
		wprintw(infobox, "\n\n");

	if (g_useColor)
	{
		wattroff(infobox, A_BOLD|COLOR_PAIR(2));
		wattron(infobox, COLOR_PAIR(1));
	}
	wprintw(infobox, (x) gettext(x)("Movement\n"));
	wprintw(infobox, (x) gettext(x)(" h - Move left\n"));
	wprintw(infobox, (x) gettext(x)(" j - Move down\n"));
	wprintw(infobox, (x) gettext(x)(" k - Move up\n"));
	wprintw(infobox, (x) gettext(x)(" l - Move right\n\n"));
	wprintw(infobox, (x) gettext(x)("Commands\n"));
	wprintw(infobox, (x) gettext(x)(" c - Check solution\n"));
	wprintw(infobox, (x) gettext(x)(" H - Give a hint\n"));
	if (g_useColor)
	{
		wprintw(infobox, (x) gettext(x)(" m - Toggle marks\n"));
	}
	wprintw(infobox, (x) gettext(x)(" N - New puzzle\n"));
	wprintw(infobox, (x) gettext(x)(" Q - Quit\n"));
	wprintw(infobox, (x) gettext(x)(" r - Redraw\n"));
	wprintw(infobox, (x) gettext(x)(" S - Solve puzzle\n"));
	wprintw(infobox, (x) gettext(x)(" x - Delete number\n"));
	if (g_useColor)
	{
		wattroff(infobox, COLOR_PAIR(1));
	}
}

static int get_character_at_grid(char* board, int x, int y)
{
	int posx, posy;
	posy = (y-1)/2;
	posx = (x-2)/4;
	return board[posy*9+posx];
}

static void fill_grid(char *user_board, char *plain_board, int x_cursor, int y_cursor)
{
	int row, col, x, y;
	int n;
	int c;
	int selected;
	int isUserInput;
	int m;

	selected = get_character_at_grid(user_board, x_cursor, y_cursor);
	wstandend(grid);
	y = 1;
	for(row=0; row < 9; row++)
	{
		x = 2;
		for(col=0; col < 9; col++)
		{
			isUserInput = 1;
			n = user_board[row*9+col];
			if(n == '.')
				c = ' ';
			else
			{
				c = n;
				m = plain_board[row*9+col];
				if(n == m)
					isUserInput = 0;
			}
			if (g_useColor && g_useHighlights && selected == c)
			{
				if (x == x_cursor && y == y_cursor)
					wattron(grid, COLOR_PAIR(5));
				else
					wattron(grid, COLOR_PAIR(4));
			}
			if(isUserInput)
				wattron(grid, COLOR_PAIR(3));
			mvwprintw(grid, y, x, "%c", c);
			if(isUserInput)
				wattroff(grid, COLOR_PAIR(3));
			if (g_useColor && g_useHighlights && selected == c)
			{
				if (x == x_cursor && y == y_cursor)
					wattroff(grid, COLOR_PAIR(5));
				else
					wattroff(grid, COLOR_PAIR(4));
			}
			x += 4;
		}
		y += 2;
	}
}

static void new_puzzle(void)
{
	int holes = g_level;
	char* stream;

	if (g_provided_stream)
		stream = g_provided_stream;
	else
		stream = generate_puzzle(holes);

	
	strcpy(plain_board, stream);
	strcpy(user_board, stream);

	if (!g_provided_stream)
		free(stream);

	fill_grid(plain_board, plain_board, 2, 1);

	g_playing = 1;
}

static int hint(void)
{
	char tmp_board[STREAM_LENGTH];
	int i, j, solved, try = 0;

	strcpy(tmp_board, user_board);
	solved = solve(tmp_board);
	if (solved != 0)
	{
		do
		{
			i = rand() % 8 + 1;
			j = rand() % 8 + 1;
			try++;
			if ( user_board[i*9+j] == '.')
			{
				user_board[i*9+j] = tmp_board[i*9+j];
				return 1;
			}
		} while (try < 20);
	}
	return 0;
}

int main(int argc, char *argv[])
{
#if ENABLE_NLS
	
	setlocale(LC_ALL, "");
	bindtextdomain(PACKAGE, LOCALEDIR);
	textdomain(PACKAGE);
#endif
	int run = 1;
	int key, x, y, posx, posy;

	parse_arguments(argc, argv);
	srand(time(NULL));

	if (g_outputFilename)
	{
#ifdef ENABLE_CAIRO
		generate_output(g_level, g_outputFilename, g_sudokuCount, g_outIsPDF);
		return 0;
#else
		printf("nudoku is compiled without cairo support.\n");
		printf("To use the output feature, please compile with --enable-cairo.\n");
		return 1;
#endif
	}

	init_curses();
	init_windows();

#ifdef DEBUG
	strcpy(plain_board, EXAMPLE_STREAM);
	strcpy(user_board, EXAMPLE_STREAM);
	fill_grid(plain_board, plain_board, 2, 1);
	g_playing = 1;
#else
	new_puzzle();
#endif 

	refresh();
	wrefresh(grid);
	wrefresh(infobox);

	y = 1;
	x = 2;
	wmove(grid, y, x);
	while(run)
	{
#ifdef DEBUG
		mvprintw(0, 0, "y: %.2d x: %.2d", y, x);
#endif 
		refresh();
		wrefresh(grid);
		key = getch();
		
		werase(status);
		switch(key)
		{
			case 'h':
			case KEY_LEFT:
				if(x>5)
				{
					x -= 4;
					if(g_playing)
					{
						
						
						
						
						
						fill_grid(user_board, plain_board, x, y);
					}
				}
				break;
			case 'l':
			case KEY_RIGHT:
				if(x<34)
				{
					x += 4;
					if(g_playing)
					{
						fill_grid(user_board, plain_board, x, y);
					}
				}
				break;
			case 'k':
			case KEY_UP:
				if(y>2)
				{
					y -= 2;
					if(g_playing)
					{
						fill_grid(user_board, plain_board, x, y);
					}
				}
				break;
			case 'j':
			case KEY_DOWN:
				if(y<17)
				{
					y += 2;
					if(g_playing)
					{
						fill_grid(user_board, plain_board, x, y);
					}
				}
				break;
			case 'Q':
			case 27:
				run = 0;
				break;
			case 'r':
			case KEY_RESIZE:
				redrawwin(grid);
				redrawwin(infobox);
				break;
			case 'S':
				if(g_playing)
				{
					g_useHighlights = 0;
					werase(status);
					mvwprintw(status, 0, 0, (x) gettext(x)("Solving puzzle..."));
					refresh();
					wrefresh(status);
					solve(plain_board);
					fill_grid(plain_board, plain_board, x, y);
					werase(status);
					mvwprintw(status, 0, 0, (x) gettext(x)("Solved"));
					g_playing = 0;
				}
				break;
			case 'N':
				g_useHighlights = 0;
				g_hint_counter = 0;

				werase(status);
				mvwprintw(status, 0, 0, (x) gettext(x)("Generating puzzle..."));
				refresh();
				wrefresh(status);
				new_puzzle();
				werase(status);
				g_playing = 1;

				if (g_provided_stream)
				{
					free(g_provided_stream);
					g_provided_stream = NULL;
				}
				break;
			case 'c':
				if(g_playing)
				{
					int solvable;
					char tmp_board[STREAM_LENGTH];

					werase(status);

					strcpy(tmp_board, user_board);
					solvable= solve(tmp_board);

					if(solvable == 0)
					{
						mvwprintw(status, 0, 0, (x) gettext(x)("Not correct"));
					}
					else
					{
						if (strchr(user_board, '.') == NULL)
						{
							mvwprintw(status, 0, 0, (x) gettext(x)("Solved"));

							if (g_hint_counter > 0)
							{
								char t[256];
								sprintf(t, (x) gettext(x)(" with the help of %d hints"), g_hint_counter);
								mvwprintw(status, 0, 6, "%s", t);
							}

							g_playing = 0;
						}
						else
						{
							mvwprintw(status, 0, 0, (x) gettext(x)("Correct so far"));
						}
					}
				}
				break;
			
			case KEY_DC:
			case KEY_BACKSPACE:
			case 127:
			case 'x':
				if(g_playing)
				{
					posy = (y-1)/2;
					posx = (x-2)/4;
					
					if(plain_board[posy*9+posx] == '.')
					{
						user_board[posy*9+posx] = '.';
						wprintw(grid, " ");
					}
					break;
				}
			case 'H':
				if (g_playing && hint())
				{
					g_hint_counter++;
					fill_grid(user_board, plain_board, x, y);
					werase(status);
					mvwprintw(status, 0, 0, (x) gettext(x)("Provided hint"));
				}
				break;
			case 'm':
				
				if (g_useColor)
				{
					g_useHighlights = !g_useHighlights;
					fill_grid(user_board, plain_board, x, y);
				}
				break;
			default:
				break;
		}
		
		if(key >= 49 && key <= 57 && g_playing)
		{
			posy = (y-1)/2;
			posx = (x-2)/4;
			
			if(plain_board[posy*9+posx] == '.')
			{
				
				user_board[posy*9+posx] = key;
				
				fill_grid(user_board, plain_board, x, y);
			}
		}
		wmove(grid, y,x);
		refresh();
		wrefresh(status);
		wrefresh(grid);
		wrefresh(infobox);
	}

	if (g_provided_stream)
		free(g_provided_stream);
	if (g_outputFilename)
		free(g_outputFilename);

	endwin();
	return EXIT_SUCCESS;
}

