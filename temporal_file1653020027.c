








char playmodeStr[2][20] = {"Classic","Bonuses and Traps"};

struct playmode {
	int pm_id;
	
	int gbonusc;
	int gbonus_moves;
	
	int dbonusc;
	int dbonus_score;
	
	int ttrapc;
	
	int gtrapc;
	int gtrap_moves;
};

struct playmode currentPm;

void setPlaymode(int newmode);
void setPlaymodeArgs(int npmid, int ngbonusc, int ngbonus_moves, int ndbonusc, int
ndbonus_score, int nttrapc, int ngtrapc, int ngtrap_moves);

void setPlaymode(int newmode) {
	if (newmode == 0) {
		setPlaymodeArgs(0,0,0,0,0,0,0,0);
	}
	else if (newmode == 1) {
		
		
		setPlaymodeArgs(1,14,5,20,18,0,16,4);
	}
	else
		setPlaymodeArgs(0,0,0,0,0,0,0,0);
}

void setPlaymodeArgs(int npmid, int ngbonusc, int ngbonus_moves, int ndbonusc, int
ndbonus_score, int nttrapc, int ngtrapc, int ngtrap_moves) {
	currentPm.pm_id = npmid;
	currentPm.gbonusc = ngbonusc;
	currentPm.gbonus_moves = ngbonus_moves;
	currentPm.dbonusc = ndbonusc;
	currentPm.dbonus_score = ndbonus_score;
	currentPm.ttrapc = nttrapc;
	currentPm.gtrapc = ngtrapc;
	currentPm.gtrap_moves = ngtrap_moves;
}



struct level_pos {
        int color;
        int number;
};

struct score_entry {
        int s;
        char n[20];
};

struct player_info {
        int gbonus_moves, gtrap_moves;
        int x, y, score;
};

void makeLevel();
void litRoute();
void movePlayer(int x, int y);
void teleport();
int isGameOver();
int getRandomInt(int min, int max);
void game();
void quit(int ret_code);
void usage();

void loadScores();
void saveScores();
void addScoreEntry(char *nname, int nscore);


struct level_pos level[80][23];

struct score_entry hiscores[10];

struct player_info player;

int state = 0;
int changed = 1;

char score_str[12];



int main(int argc, char *argv[]) {
        int transparent_bg = 0;
        int optchr;
        
        while ( (optchr = getopt(argc, argv, "t")) != EOF) {
                switch (optchr) {
                        case 't':
                                transparent_bg = 1;
                                break;
                        case 'h':
                        case '?':
                                usage();
                                exit(0);
                }
        }
        srand(time((int *) 0));

        initscr();
        if (has_colors()) {
                int bg = COLOR_BLACK;
                if (transparent_bg) {
                        if (use_default_colors() != ERR) {
                                bg = -1;
                        }
                }
                start_color();
                init_pair(1, COLOR_GREEN, bg);
                init_pair(2, COLOR_CYAN, bg);
                init_pair(3, COLOR_WHITE, bg);
                init_pair(4, COLOR_YELLOW, bg);
                init_pair(5, COLOR_MAGENTA, bg);
                init_pair(6, COLOR_BLUE, bg);
                init_pair(7, COLOR_GREEN, bg);
                
                init_pair(8, COLOR_WHITE, bg);
                init_pair(9, COLOR_RED, bg);
        }
        else {
                printf("This game is very unplayable without colors.");
                quit(EXIT_FAILURE);
        }
        nl();
        noecho();
        curs_set(0);

        game();

        quit(0);
        return 0;
}

void game() {
        int i, j, k;
        
        char tmpstr[256];

        while(1) {
                if (state == 1) {
                        makeLevel();
                        player.gbonus_moves = 0;
                        player.gtrap_moves = 0;
                        player.score = 0;
                        player.x = getRandomInt(0, 80-1);
                        player.y = getRandomInt(0, 23-1);
                        state++;
                        changed = 1;

                        clear();
                        for (i=0; i<80; i++) {
                                mvaddch(23,i,'-');
                        }
                }

                if (state == 2) {
                        if (changed == 1) {
                                litRoute();
                                for (j=0; j<23; j++) {
                                        for (i=0; i<80; i++) {
                                                attron(COLOR_PAIR(level[i][j].color));
                                                switch(k = level[i][j].number) {
                                                
                                                        case 10:
                                                                mvaddch(j,i, '$');
                                                                level[i][j].color = 4;
                                                                break;
                                                        case 11:
                                                                mvaddch(j,i, '*');
                                                                level[i][j].color = 5;
                                                                break;
                                                        case 12:
                                                                mvaddch(j,i, 'T');
                                                                level[i][j].color = 6;
                                                                break;
                                                        case 13:
                                                                mvaddch(j,i, 'G');
                                                                level[i][j].color = 7;
                                                                break;
                                                        default:
                                                                if ((k >= 1) && (k <= 9)) {
                                                                        mvaddch(j,i, '0'+level[i][j].number);
                                                                }
                                                                else if (k==0)
                                                                        mvaddch(j,i,' ');

                                                                if (currentPm.pm_id != 0) {
                                                                        level[i][j].color = 8;
                                                                }
                                                                else
                                                                        level[i][j].color = 1;
                                                                break;
                                                }
                                        }
                                }
                        if (currentPm.pm_id != 0)
                                attron(COLOR_PAIR(9));
                        else
                                attron(COLOR_PAIR(3));
                        mvaddch(player.y, player.x, '@');
                        sprintf(score_str, "%s %d", "Score:", player.score);
                        mvaddstr(23+1,80-12,score_str);

                        if ((player.gbonus_moves > 0) && (player.gtrap_moves > 0)) {
                                mvaddstr(23+1,0,"You are confused and greed.");
                        }
                        else if (player.gbonus_moves > 0) {
                                mvaddstr(23+1,0,"You are greed.");
                        }
                        else if (player.gtrap_moves > 0) {
                                mvaddstr(23+1,0,"You are confused.");
                        }
                        else
                                mvaddstr(23+1,0,"                           ");

                        refresh();
                        changed = 0;
                        }

                        switch (getch()) {
                                case '7':
                                        movePlayer(player.x-1,player.y-1);
                                        break;
                                case '8':
                                        movePlayer(player.x,player.y-1);
                                        break;
                                case '9':
                                        movePlayer(player.x+1,player.y-1);
                                        break;
                                case '6':
                                        movePlayer(player.x+1,player.y);
                                        break;
                                case '3':
                                        movePlayer(player.x+1,player.y+1);
                                        break;
                                case '2':
                                        movePlayer(player.x,player.y+1);
                                        break;
                                case '1':
                                        movePlayer(player.x-1,player.y+1);
                                        break;
                                case '4':
                                        movePlayer(player.x-1,player.y);
                                        break;
                        }
                        if (isGameOver() == 1) {
                                state++;
                        }
                }
                else if (state == 3) {
                        clear();
                        attron(COLOR_PAIR(1));
                        mvaddstr((23-4) / 2,(80-41) / 2,
                                        "  ___                   ___");
                        mvaddstr((23-4) / 2 + 1,(80-41) / 2,
                                        " / __|__ _ _ __  ___   / _ \\__ _____ _ _");
                        mvaddstr((23-4) / 2 + 2,(80-41) / 2,
                                        "| (_ / _` | '  \\/ -_) | (_) \\ V / -_) '_|");
                        mvaddstr((23-4) / 2 + 3,(80-41) / 2,
                                        " \\___\\__,_|_|_|_\\___|  \\___/ \\_/\\___|_|");
                        sprintf(score_str, "%s %d", "Score: ", player.score);
                        mvaddstr((23 -4) / 2 + 5, (80 - 12) / 2,
                                        score_str);
                        mvaddstr(23 - 5,(80 - 13) / 2,
                                        "Press any key");

                        if (getch() != 0) {
                                if (player.score > hiscores[9].s) {
                                        clear();
                                        printw("You made hiscore! What's your name?\n\nName: ");
                                        refresh();
                                        echo();
                                        getstr(tmpstr);
                                        noecho();
                                        addScoreEntry(tmpstr, player.score);
                                        
                                        player.score = 0;
                                        state = 4;
                                        changed = 1;
                                }
                                else
                                        state = 0;
                        }
                }
                else if (state == 4) {
                        if ( hiscores[0].s == 0 )
                                loadScores();
                        if (changed == 1) {
                          clear();
                          attron(COLOR_PAIR(1));
                          mvaddstr(1, (80-30) / 2, " _  _ _");
                          mvaddstr(2, (80-30) / 2, "| || (_)___ __ ___ _ _ ___ ___");
                          mvaddstr(3, (80-30) / 2, "| __ | (_-</ _/ _ \\ '_/ -_|_-<");
                          mvaddstr(4, (80-30) / 2, "|_||_|_/__/\\__\\___/_| \\___/__/");

                          
                          attron(COLOR_PAIR(2));
                          for (i=0;i<3;i++) {
                                  sprintf(tmpstr, " %d.", i+1);
                                  mvaddstr(6+i, (80 - 33) / 2, tmpstr);
                                  mvaddstr(6+i, (80 - 33) / 2 + 5, hiscores[i].n);
                                  sprintf(tmpstr, "%d", hiscores[i].s);
                                  mvaddstr(6+i, (80 - 33) / 2 + 27, tmpstr);
                          }
                          attron(COLOR_PAIR(1));
                          for (i=3;i<9;i++) {
                                  sprintf(tmpstr, " %d.", i+1);
                                  mvaddstr(6+i, (80 - 33) / 2, tmpstr);
                                  mvaddstr(6+i, (80 - 33) / 2 + 5, hiscores[i].n);
                                  sprintf(tmpstr, "%d", hiscores[i].s);
                                  mvaddstr(6+i, (80 - 33) / 2 + 27, tmpstr);
                          }
                          sprintf(tmpstr, "%d.", 10);
                          mvaddstr(15, (80 - 33) / 2, tmpstr);
                          mvaddstr(15, (80 - 33) / 2 + 5, hiscores[9].n);
                          sprintf(tmpstr, "%d", hiscores[9].s);
                          mvaddstr(15, (80 - 33) / 2 + 27, tmpstr);

                          mvaddstr(23 - 4,(80 - 13) / 2,
                                        "Press any key");
                          changed = 0;
                        }
                        if (getch() != 0) {
                                state = 0;
                                changed = 1;
                        }
                }
                else if (state == 0) {
                        if (changed == 1) {
                                clear();
                                attron(COLOR_PAIR(1));
                                
                                mvaddstr(2,(80-33) / 2,
                                                "  ____                   _");
                                mvaddstr(3,(80-33) / 2,
                                                " / ___|_ __ ___  ___  __| |_   _");
                                mvaddstr(4,(80-33) / 2,
                                                "| |  _| '__/ _ \\/ _ \\/ _` | | | |");
                                mvaddstr(5,(80-33) / 2,
                                                "| |_| | | |  __/  __/ (_| | |_| |");
                                mvaddstr(6,(80-33) / 2,
                                                " \\____|_|  \\___|\\___|\\__,_|\\__, |");
                                mvaddstr(7,(80-33) / 2,
                                                "                           |___/");
                                mvaddstr(8,(80-33) / 2, "Version: 0.2.0");
                                mvaddstr(10,(80-18) / 2,
                                                "s - Start new game");
                                mvaddstr(11,(80-17) / 2,
                                                "h - Show Hiscores");
                                sprintf(tmpstr, "p - Playmode: %s",
                                playmodeStr[currentPm.pm_id]);
                                mvaddstr(12, (80 - 18) / 2, tmpstr);

                                mvaddstr(14,(80-8) / 2, "q - Quit");
                                refresh();
                                changed = 0;
                        }

                        switch (getch()) {
                                case 's':
                                        state++;
                                        break;
                                case 'h':
                                        state = 4;
                                        changed = 1;
                                        break;
                                case 'p':
                                        setPlaymode(currentPm.pm_id+1);
                                        changed = 1;
                                        break;
                                case 'q':
                                        quit(0);
                                        break;
                        }
                }

                usleep(80000L);
        }
}

void makeLevel() {
        int i, j, k, l, maxnumber = 9;
        
        int tmp_gbc, tmp_dbc, tmp_ttc, tmp_gtc;
        struct level_pos temp;

        
        if (currentPm.pm_id == 1) {
                maxnumber = 13;
                tmp_gbc = currentPm.gbonusc;
                tmp_dbc = currentPm.dbonusc;
                tmp_ttc = currentPm.ttrapc;
                tmp_gtc = currentPm.gtrapc;
        }
        for (j=0; j<23; j++) {
                for (i=0; i<80; i++) {
                        switch (k = getRandomInt(1,maxnumber)) {
                                case 10:
                                        if (tmp_gbc > 0) {
                                                level[i][j].number = k;
                                                level[i][j].color = 4;
                                                tmp_gbc--;
                                        }
                                        else
                                                level[i][j].number = getRandomInt(1,9);
                                        break;
                                case 11:
                                        if (tmp_dbc > 0) {
                                                level[i][j].number = k;
                                                level[i][j].color = 5;
                                                tmp_dbc--;
                                        }
                                        else
                                                level[i][j].number = getRandomInt(1,9);
                                        break;
                                case 12:
                                        if (tmp_ttc > 0) {
                                                level[i][j].number = k;
                                                level[i][j].color = 6;
                                                tmp_ttc--;
                                        }
                                        else
                                                level[i][j].number = getRandomInt(1,9);
                                        break;
                                case 13:
                                        if (tmp_gtc > 0) {
                                                level[i][j].number = k;
                                                level[i][j].color = 7;
                                                tmp_gtc--;
                                        }
                                        else
                                                level[i][j].number = getRandomInt(1,9);
                                        break;
                                default:
                                        level[i][j].number = k;
                                        if (currentPm.pm_id != 0) {
                                                level[i][j].color = 8;
                                        }
                                        else
                                                level[i][j].color = 1;
                                        break;
                        }
                }
        }
        
        if (currentPm.pm_id != 0) {
                for (i=0;i<80;i++) {
                        for (l=0;l<10;l++) {
                                j = getRandomInt(0, (23-1) / 2);
                                k = getRandomInt((23-1) / 2, 23-1);
                                temp = level[i][j];
                                level[i][j] = level[i][k];
                                level[i][k] = temp;
                        }
                }
                for (i=0;i<23;i++) {
                        for (l=0;l<10;l++) {
                                j = getRandomInt(0, (80-1) / 2);
                                k = getRandomInt((80-1) / 2, 80-1);
                                temp = level[j][i];
                                level[j][i] = level[k][i];
                                level[k][i] = temp;
                        }
                }
        }
}


void litRoute() {
        int i, j, k;

        int tx = player.x, ty = player.y;

        for (i = -1; i <= 1; i++) {
                for (j = -1; j <= 1; j++) {
                        if ( (tx+i >= 0) && (ty+j >= 0) &&
                                        (tx+i < 80) &&
                                        (ty+j < 23) ) {

                                for ( k = 1; k <= level[tx+i][ty+j].number; k++)
                                {
                                        if ( level[tx+(i*k)][ty+(j*k)].number
                                                        == 0 ) {
                                                break;
                                        }
                                        else if ( (tx+(i*k) >= 0) &&
                                                (ty+(j*k) >= 0) &&
                                                (tx+(i*k) < 80)
                                                && (ty+(j*k) < 23) ) {

                                                level[tx+(i*k)][ty+(j*k)].color = 2;
                                        }
                                        else
                                                break;
                                }
                        }
                }
        }
}

void movePlayer(int x, int y) {
        int xc, yc, i, j, i_max, tscore = 0;
        int tx = player.x; int ty = player.y;

        if (player.gtrap_moves > 0) {
                x = player.x + getRandomInt(-1,1);
                y = player.y + getRandomInt(-1,1);
                player.gtrap_moves--;
        }

        xc = x - tx; yc = y - ty;

        i_max = level[tx+xc][ty+yc].number;

        for ( i = 1; i <= i_max; i++) {
                if ( level[tx+(i*xc)][ty+(i*yc)].number == 0) {
                        i_max = i-1;
                        break;
                }
                if ( (tx+(i*xc) >= 0) && (ty+(i*yc) >= 0) &&
                                (tx+(i*xc) < 80) &&
                                (ty+(i*yc) < 23) ) {

                        switch ( j = level[tx+(i*xc)][ty+(i*yc)].number ) {
                                case 10:
                                        player.gbonus_moves += currentPm.gbonus_moves;
                                        level[tx+(i*xc)][ty+(i*yc)].number = 0;
                                        break;
                                case 11:
                                        tscore += currentPm.dbonus_score;
                                        level[tx+(i*xc)][ty+(i*yc)].number = 0;
                                        break;
                                case 12:
                                        teleport();
                                        if (player.gbonus_moves > 0) {
                                                player.score += (2*tscore);
                                                player.gbonus_moves--;
                                        }
                                        else
                                                player.score += tscore;
                                        level[tx][ty].number = 0;
                                        return;
                                        break;
                                case 13:
                                        player.gtrap_moves += currentPm.gtrap_moves;
                                        level[tx+(i*xc)][ty+(i*yc)].number = 0;
                                        break;
                                default:
                                        tscore += level[tx+(i*xc)][ty+(i*yc)].number;
                                        level[tx+(i*xc)][ty+(i*yc)].number = 0;
                                        break;
                        }
                }
                else {
                        i_max = i-1;
                        break;
                }
        }

        if (player.gbonus_moves > 0) {
                player.score += (2*tscore);
                player.gbonus_moves--;
        }
        else
                player.score += tscore;
        level[tx][ty].number = 0;
        player.x += xc*i_max;
        player.y += yc*i_max;
        changed = 1;
}

void teleport() {
        int tx, ;

        while(1) {
                tx = getRandomInt(0,80-1);
                ty = getRandomInt(0,23-1);
                if (level[tx][ty].number != 0)
                        break;
        }

        changed = 1;
}

int isGameOver() {
        int i, j;
        int tx = player.x, ty = player.y;

        for (i=-1; i<=1; i++) {
                for (j=-1; j<=1; j++) {
                        if ( (tx+i >= 0) && (ty+j >= 0) &&
                                        (tx+i < 80) &&
                                        (ty+j < 23) &&
                                        level[tx+i][ty+j].number != 0 ) {
                                return 0;
                        }
                }
        }

        return 1;
}

void quit(int ret_code) {
        endwin();
        exit(ret_code);
}

void usage() {
        printf("Greedy %s%s", "Version: 0.2.0", "\n");
        printf("Usage: greedy -[ht]\n");
        printf("  -h: Print help and exit\n");
        printf("  -t: Transparent background color\n");
}

int getRandomInt(int min, int max) {

        unsigned int rand_int;

        
        if (min > max) {
                return 0;
        }

        rand_int = min + (rand() % (max - min + 1));

        return rand_int;
}




int *openScoreFile(char *mode) {
        FILE *file;

        if ( (file = fopen("/var/lib/games/greedy.scores", mode)) == NULL) {
                printf("\nUnable to open hiscore file \"%s\" ", "/var/lib/games/greedy.scores");
                if ( strcmp(mode, "r") == 0)
                        printf("for read.\n");
                else if ( strcmp(mode, "w") == 0)
                        printf("for write.\n");
        }

        return 1;
}

void loadScores() {
        int i;
        FILE *file;

        if ( (file = openScoreFile("r")) == NULL) {
                if ( (file = openScoreFile("w")) == NULL ) {
                        quit(EXIT_FAILURE);
                }
                for (i=0;i<10;i++) {
                        
                        fprintf(file, "Player\n");
                        fprintf(file, "%d\n", 1000-i*100);
                }
                fclose(file);
                file = openScoreFile("r");
        }

        for (i=0;i<10;i++) {
                fscanf(file, "%s\n", hiscores[i].n);
                fscanf(file, "%d\n", &hiscores[i].s);
        }

        fclose(file);
}

void saveScores() {
        int i;
        FILE* file;

        if ( (file = openScoreFile("w")) == NULL) {
                quit(EXIT_FAILURE);
        }

        for (i=0;i<10;i++) {
                fprintf(file, "%s\n", hiscores[i].n);
                fprintf(file, "%d\n", hiscores[i].s);
        }

        fclose(file);
}

void addScoreEntry(char *nname, int nscore) {
        int i,j;

        if (hiscores[0].s == 0) {
                loadScores();
        }

        for (i=0;i<10;i++) {
                if (nscore > hiscores[i].s) {
                        
                        for (j=8;j>=i;j--) {
                                hiscores[j+1].s = hiscores[j].s;
                                sprintf(hiscores[j+1].n, "%s", hiscores[j].n);
                        }
                        
                        hiscores[i].s = nscore;
                        sprintf(hiscores[i].n, "%s", nname);
                        break;
                }
        }

        saveScores();
}