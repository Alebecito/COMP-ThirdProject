
















	

	






	
	
	
	
	
    typedef struct _IO_FILE FILE;
	

	

	
	const char SNAKE_HEAD = 'X';
	const char SNAKE_BODY = '#';
	const char WALL = '#';	
	const char FOOD = '*';
	const char BLANK = ' ';
	
	
	
	void gotoxy(int x,int y)
	{
		printf("%c[%d;%df",0x1B,y,x);
	}

	
	int kbhit(void)
	{
	  struct termios oldt, newt;
	  int ch;
	  int oldf;

	  tcgetattr(STDIN_FILENO, &oldt);
	  newt = oldt;
	  newt.c_lflag &= ~(ICANON | ECHO);
	  tcsetattr(STDIN_FILENO, TCSANOW, &newt);
	  oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
	  fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);

	  ch = getchar();

	  tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
	  fcntl(STDIN_FILENO, F_SETFL, oldf);

	  if(ch != EOF)
	  {
		ungetc(ch, stdin);
		return 1;
	  }

	  return 0;
	}

	
	char getch()
	{
		char c;
		system("stty raw");
		c= getchar();
		system("stty sane");
		
		return(c);
	}

	void clrscr()
	{
		system("clear");
		return;
	}
	




char waitForAnyKey(void)
{
	int pressed;
	
	while(!kbhit());
	
	pressed = getch();
	
	return((char)pressed);
}

int getGameSpeed(void)
{
	int speed;
	clrscr();
	
	do
	{
		gotoxy(10,5);
		printf("Select The game speed between 1 and 9.");
		speed = waitForAnyKey()-48;
	} while(speed < 1 || speed > 9);
	return(speed);
}

void pauseMenu(void)
{
	int i;
	
	gotoxy(28,23);
	printf("**Paused**");
	
	waitForAnyKey();
	gotoxy(28,23);
	printf("            ");

	return;
}


int checkKeysPressed(int direction)
{
	int pressed;
	
	if(kbhit()) 
	{
		pressed=getch();
		if (direction != pressed)
		{
			if(pressed == (char)'B' && direction != (char)'A' )
				direction = pressed;
			else if (pressed == (char)'A'  && direction != (char)'B')
				direction = pressed;
			else if (pressed == (char)'D' && direction != (char)'C')
				direction = pressed;
			else if (pressed == (char)'C' && direction != (char)'D')
				direction = pressed;
			else if (pressed == 27  || pressed == 112 )
				pauseMenu();
		}
	}
	return(direction);
}



int collisionSnake (int x, int y, int snakeXY[][310], int snakeLength, int detect)
{
	int i;
	for (i = detect; i < snakeLength; i++) 
	{
		if ( x == snakeXY[0][i] && y == snakeXY[1][i])
			return(1);
	}
	return(0);
}


int generateFood(int foodXY[], int width, int height, int snakeXY[][310], int snakeLength)
{
	int i;
	
	do
	{
		srand ( time(NULL) );
		foodXY[0] = rand() % (width-2) + 2;
		srand ( time(NULL) );
		foodXY[1] = rand() % (height-6) + 2;
	} while (collisionSnake(foodXY[0], foodXY[1], snakeXY, snakeLength, 0)); 

	gotoxy(foodXY[0] ,foodXY[1]);
	printf("%c", FOOD);
	
	return(0);
}


void moveSnakeArray(int snakeXY[][310], int snakeLength, int direction)
{
	int i;
	for( i = snakeLength-1; i >= 1; i-- )
	{
		snakeXY[0][i] = snakeXY[0][i-1];
		snakeXY[1][i] = snakeXY[1][i-1];
	}	
	
	
	switch(direction)
	{
		case (char)'B':
			snakeXY[1][0]++;
			break;
		case (char)'C':
			snakeXY[0][0]++;
			break;
		case (char)'A' :
			snakeXY[1][0]--;
			break;
		case (char)'D':
			snakeXY[0][0]--;
			break;			
	}
	
	return;
}

void move(int snakeXY[][310], int snakeLength, int direction)
{
	int x;
	int y;

	
	x = snakeXY[0][snakeLength-1];
	y = snakeXY[1][snakeLength-1];
	
	gotoxy(x,y);
	printf("%c",BLANK);	
	
	
	gotoxy(snakeXY[0][0],snakeXY[1][0]);	
	printf("%c", SNAKE_BODY);
	
	moveSnakeArray(snakeXY, snakeLength, direction);
	
	gotoxy(snakeXY[0][0],snakeXY[1][0]);	
	printf("%c",SNAKE_HEAD);
	
	gotoxy(1,1); 
	
	return;
}


int eatFood(int snakeXY[][310], int foodXY[]) 
{
	if (snakeXY[0][0] == foodXY[0] && snakeXY[1][0] == foodXY[1])
	{
		foodXY[0] = 0;
		foodXY[1] = 0; 
		
		printf("\7"); 
		return(1);
	}		
	
	return(0);
}

int collisionDetection(int snakeXY[][310], int consoleWidth, int consoleHeight, int snakeLength ) 
{
	int colision = 0;
	if ((snakeXY[0][0] == 1) || (snakeXY[1][0] == 1) || (snakeXY[0][0] == consoleWidth) || (snakeXY[1][0] == consoleHeight - 4)) 
		colision = 1;
	else
		if (collisionSnake(snakeXY[0][0], snakeXY[1][0], snakeXY, snakeLength, 1)) 
			colision = 1;
			
	return(colision);
}

void refreshInfoBar(int score, int speed)
{
	gotoxy(5,23);
	printf("Score: %d", score);
	
	gotoxy(5,24);
	printf("Speed: %d", speed);

	gotoxy(52,23);
	printf("Coder: Matthew Vlietstra");

	gotoxy(52,24);
	printf("Version: 0.5");
	
	return;
}





void createHighScores(void)
{
	FILE *file; 
	int i;

	file = fopen("highscores.txt","w+");
	
	if(file == NULL)
	{
		printf("FAILED TO CREATE HIGHSCORES!!! EXITING!");
		exit(0);	
	}
	
	for(i = 0; i < 5; i++)
	{
		fprintf(file,"%d",i+1);
		fprintf(file,"%s","\t0\t\t\tEMPTY\n");
	}	
	
	fclose(file);
	return;
}

int getLowestScore()
{
	FILE *fp;
	char str[128];
	int lowestScore = 0;
	int i;
	int intLength;
	
	if((fp = fopen("highscores.txt", "r")) == NULL)
	{
		
		createHighScores(); 
		if((fp = fopen("highscores.txt", "r")) == NULL)
			exit(1);
	}

	while(!feof(fp))
	{
		fgets(str, 126, fp);  
	}
	fclose(fp);	
	
	i=0;
	
	
	while(str[2+i] != '\t')
	{
		i++;
	}
	
	intLength = i;
	
	
	for(i=0;i < intLength; i++)
	{
		lowestScore = lowestScore + ((int)str[2+i] - 48) * pow(10,intLength-i-1);
	}

	return(lowestScore);
}

void inputScore(int score) 
{
	FILE *fp;
	FILE *file; 
	char str[20];
	int fScore;
	int i, s, y;
	int intLength;
	int scores[5];
	int x;
	char highScoreName[20];
	char highScoreNames[5][20];
	
	char name[20];
	
	int entered = 0;
	
	clrscr(); 
	
	if((fp = fopen("highscores.txt", "r")) == NULL)
	{
		
		createHighScores(); 
		if((fp = fopen("highscores.txt", "r")) == NULL)
			exit(1);
	}
	gotoxy(10,5);
	printf("Your Score made it into the top 5!!!");
	gotoxy(10,6);
	printf("Please enter your name: ");
	gets(name);
	
	x = 0;
	while(!feof(fp))
	{
		fgets(str, 126, fp);  
		
		i=0;
		
		
		while(str[2+i] != '\t')
		{
			i++;
		}
		
		s = i;
		intLength = i;
		i=0;
		while(str[5+s] != '\n')
		{
			
			highScoreName[i] = str[5+s];
			s++;
			i++;
		}
		
		
		fScore = 0;
		
		for(i=0;i < intLength; i++)
		{
			
			fScore = fScore + ((int)str[2+i] - 48) * pow(10,intLength-i-1);
		}
		
		if(score >= fScore && entered != 1)
		{
			scores[x] = score;
			strcpy(highScoreNames[x], name);
			
			
			
			x++;
			entered = 1;
		}
		
		
		
		
		strcpy(highScoreNames[x], highScoreName);
		scores[x] = fScore;
		
		
		for(y=0;y<20;y++)
		{
			highScoreName[y] = NULL;
		}
		
		x++;
		if(x >= 5)
			break;
	}
	
	fclose(fp);
	
	file = fopen("highscores.txt","w+");
	
	for(i=0;i<5;i++)
	{
		
		fprintf(file, "%d\t%d\t\t\t%s\n", i+1, scores[i], highScoreNames[i]);	
	}

	fclose(file);
	
	return;
}

void displayHighScores(void) 
{
	FILE *fp;
	char str[128];
	int y = 5;
	
	clrscr(); 
	
	if((fp = fopen("highscores.txt", "r")) == NULL) {
		
		createHighScores(); 
		if((fp = fopen("highscores.txt", "r")) == NULL)
			exit(1);
	}
	
	gotoxy(10,y++);
	printf("High Scores");	
	gotoxy(10,y++);
	printf("Rank\tScore\t\t\tName");
	while(!feof(fp)) {
		gotoxy(10,y++);
		if(fgets(str, 126, fp)) 
			printf("%s", str);
	}

	fclose(fp);	
	gotoxy(10,y++);
	
	printf("Press any key to continue...");
	waitForAnyKey();	
	return;
}



void youWinScreen(void)
{
	int x = 6, y = 7;
	gotoxy(x,y++);
	printf("'##:::'##::'#######::'##::::'##::::'##:::::'##:'####:'##::: ##:'####:");
	gotoxy(x,y++);
	printf(". ##:'##::'##.... ##: ##:::: ##:::: ##:'##: ##:. ##:: ###:: ##: ####:");
	gotoxy(x,y++);
	printf(":. ####::: ##:::: ##: ##:::: ##:::: ##: ##: ##:: ##:: ####: ##: ####:");
	gotoxy(x,y++);
	printf("::. ##:::: ##:::: ##: ##:::: ##:::: ##: ##: ##:: ##:: ## ## ##:: ##::");
	gotoxy(x,y++);
	printf("::: ##:::: ##:::: ##: ##:::: ##:::: ##: ##: ##:: ##:: ##. ####::..:::");
	gotoxy(x,y++);
	printf("::: ##:::: ##:::: ##: ##:::: ##:::: ##: ##: ##:: ##:: ##:. ###:'####:");
	gotoxy(x,y++);
	printf("::: ##::::. #######::. #######:::::. ###. ###::'####: ##::. ##: ####:");
	gotoxy(x,y++);
	printf(":::..::::::.......::::.......:::::::...::...:::....::..::::..::....::");
	gotoxy(x,y++);	
	
	waitForAnyKey();
	clrscr(); 
	return;
}

void gameOverScreen(void)
{
	int x = 17, y = 3;
	
	
	
	gotoxy(x,y++);
	printf(":'######::::::'###::::'##::::'##:'########:\n");
	gotoxy(x,y++);
	printf("'##... ##::::'## ##::: ###::'###: ##.....::\n");
	gotoxy(x,y++);
	printf(" ##:::..::::'##:. ##:: ####'####: ##:::::::\n");
	gotoxy(x,y++);
	printf(" ##::'####:'##:::. ##: ## ### ##: ######:::\n");
	gotoxy(x,y++);
	printf(" ##::: ##:: #########: ##. #: ##: ##...::::\n");
	gotoxy(x,y++);
	printf(" ##::: ##:: ##.... ##: ##:.:: ##: ##:::::::\n");
	gotoxy(x,y++);
	printf(". ######::: ##:::: ##: ##:::: ##: ########:\n");
	gotoxy(x,y++);
	printf(":......::::..:::::..::..:::::..::........::\n");
	gotoxy(x,y++);
	printf(":'#######::'##::::'##:'########:'########::'####:\n");
	gotoxy(x,y++);
	printf("'##.... ##: ##:::: ##: ##.....:: ##.... ##: ####:\n");
	gotoxy(x,y++);
	printf(" ##:::: ##: ##:::: ##: ##::::::: ##:::: ##: ####:\n");
	gotoxy(x,y++);
	printf(" ##:::: ##: ##:::: ##: ######::: ########::: ##::\n");
	gotoxy(x,y++);
	printf(" ##:::: ##:. ##:: ##:: ##...:::: ##.. ##::::..:::\n");
	gotoxy(x,y++);
	printf(" ##:::: ##::. ## ##::: ##::::::: ##::. ##::'####:\n");
	gotoxy(x,y++);
	printf(". #######::::. ###:::: ########: ##:::. ##: ####:\n");
	gotoxy(x,y++);
	printf(":.......::::::...:::::........::..:::::..::....::\n");
	
	waitForAnyKey();
	clrscr(); 
	return;
}


void startGame( int snakeXY[][310], int foodXY[], int consoleWidth, int consoleHeight, int snakeLength, int direction, int score, int speed)
{
	int gameOver = 0;
	int endWait;
	
	
	int waitMili = CLOCKS_PER_SEC-(speed)*(CLOCKS_PER_SEC/10);	
	int tempScore = 10*speed;
	int oldDirection;
	int canChangeDirection = 1;
	

	endWait = clock() + waitMili;

	do
	{
		if(canChangeDirection)
		{
			oldDirection = direction;
			direction = checkKeysPressed(direction);
		}
		
		if(oldDirection != direction)
			canChangeDirection = 0;
			
		if(clock() >= endWait) 
		{
			
			
			move(snakeXY, snakeLength, direction);
			canChangeDirection = 1;

				
			if(eatFood(snakeXY, foodXY))
			{
				generateFood( foodXY, consoleWidth, consoleHeight, snakeXY, snakeLength); 
				snakeLength++;
				score+=speed;
				
				
				
				if( score >= 10*speed+tempScore)
				
				{
					speed++;
					tempScore = score;

					if(speed <= 9)
						waitMili = waitMili - (CLOCKS_PER_SEC/10);
					else
					{
						if(waitMili >= 40) 
							waitMili = waitMili - (CLOCKS_PER_SEC/200);
						
					}
					
					
					
					
					
					
				}
				
				refreshInfoBar(score, speed);
			}
			
			endWait = clock() + waitMili; 
		}
		
		gameOver = collisionDetection(snakeXY, consoleWidth, consoleHeight, snakeLength);

		if(snakeLength >= 310-5) 
		{
			gameOver = 2;
			score+=1500; 
		}
		
	} while (!gameOver);
	
	switch(gameOver)
	{
		case 1:
			printf("\7"); 
			printf("\7"); 

			gameOverScreen();

			break;
		case 2:
			youWinScreen();
			break;
	}
	
	if(score >= getLowestScore() && score != 0)
	{
		inputScore(score);
		displayHighScores();
	}
	
	return;
}

void loadEnviroment(int consoleWidth, int consoleHeight)
{
	int i;
	int x = 1, y = 1;
	int rectangleHeight = consoleHeight - 4;
	clrscr(); 
	
	gotoxy(x,y); 
	
	for (; y < rectangleHeight; y++)
	{
		gotoxy(x, y); 
		printf("%c",WALL);
		
		gotoxy(consoleWidth, y); 
		printf("%c",WALL);
	}
	
	y = 1;
	for (; x < consoleWidth+1; x++)
	{
		gotoxy(x, y); 
		printf("%c",WALL);
		
		gotoxy(x, rectangleHeight); 
		printf("%c",WALL);
	}
	
	
	return;
}

void loadSnake(int snakeXY[][310], int snakeLength)
{
	int i;
	
	
	
	
	for (i = 0; i < snakeLength; i++)
	{
		gotoxy(snakeXY[0][i], snakeXY[1][i]);
		printf("%c", SNAKE_BODY); 
	}
	
	return;
}


void prepairSnakeArray(int snakeXY[][310], int snakeLength)
{
	int i, x;
	int snakeX = snakeXY[0][0];
	int snakeY = snakeXY[1][0];
	
	
	
	
	
	for(i = 1; i <= snakeLength; i++)
	{
		snakeXY[0][i] = snakeX + i;
		snakeXY[1][i] = snakeY;
	}
	
	return;
}


void loadGame(void)
{
	int snakeXY[2][310]; 
	
	int snakeLength = 4; 
	
	int direction = (char)'D'; 
	
	int foodXY[] = {5,5};
	
	int score = 0;
	
	
	
	int consoleWidth = 80;
	int consoleHeight = 25;
	
	int speed = getGameSpeed();
	
	
	snakeXY[0][0] = 40; 
	snakeXY[1][0] = 10;
	
	loadEnviroment(consoleWidth, consoleHeight); 
	prepairSnakeArray(snakeXY, snakeLength);
	loadSnake(snakeXY, snakeLength);
	generateFood( foodXY, consoleWidth, consoleHeight, snakeXY, snakeLength);
	refreshInfoBar(score, speed); 
	startGame(snakeXY, foodXY, consoleWidth, consoleHeight, snakeLength, direction, score, speed);

	return;
}



int menuSelector(int x, int y, int yStart)
{
	char key;
	int i = 0;
	x = x - 2;
	gotoxy(x,yStart);
	
	printf(">");
	
	gotoxy(1,1);

	
	do
	{
		key = waitForAnyKey();
		
		if ( key == (char)(char)'A'  )
		{
			gotoxy(x,yStart+i);
			printf(" ");
			
			if (yStart >= yStart+i ) 
				i = y - yStart - 2;
			else
				i--;
			gotoxy(x,yStart+i);
			printf(">");
		}
		else
			if ( key == (char)(char)'B' )
			{
				gotoxy(x,yStart+i);
				printf(" ");
				
				if (i+2 >= y - yStart ) 
					i = 0;
				else
					i++;
				gotoxy(x,yStart+i);
				printf(">");				
			}	
			
			
	} while(key != (char)10); 
	return(i);
}

void welcomeArt(void)
{
	clrscr(); 
	
	printf("\n");	
	printf("\t\t    _________         _________ 			\n");	
	printf("\t\t   /         \\       /         \\ 			\n");	
	printf("\t\t  /  /~~~~~\\  \\     /  /~~~~~\\  \\ 			\n");	
	printf("\t\t  |  |     |  |     |  |     |  | 			\n");		
	printf("\t\t  |  |     |  |     |  |     |  | 			\n");
	printf("\t\t  |  |     |  |     |  |     |  |         /	\n");
	printf("\t\t  |  |     |  |     |  |     |  |       //	\n");
	printf("\t\t (o  o)    \\  \\_____/  /     \\  \\_____/ / 	\n");
	printf("\t\t  \\__/      \\         /       \\        / 	\n");
	printf("\t\t    |        ~~~~~~~~~         ~~~~~~~~ 		\n");
	printf("\t\t    ^											\n");
	printf("\t		Welcome To The Snake Game!			\n");
	printf("\t			    Press Any Key To Continue...	\n");			
	printf("\n");
	
	waitForAnyKey();
	return;
}

void controls(void)
{
	int x = 10, y = 5;
	clrscr(); 
	gotoxy(x,y++);
	printf("Controls\n");
	gotoxy(x++,y++);
	printf("Use the following arrow keys to direct the snake to the food: ");
	gotoxy(x,y++);
	printf("Right Arrow");
	gotoxy(x,y++);
	printf("Left Arrow");
	gotoxy(x,y++);
	printf("Top Arrow");
	gotoxy(x,y++);
	printf("Bottom Arrow");
	gotoxy(x,y++);
	gotoxy(x,y++);
	printf("P & Esc pauses the game.");
	gotoxy(x,y++);
	gotoxy(x,y++);
	printf("Press any key to continue...");
	waitForAnyKey();
	return;
}

void exitYN(void)
{
	char pressed;
	gotoxy(9,8);
	printf("Are you sure you want to exit(Y/N)\n");
	
	do
	{
		pressed = waitForAnyKey();
		pressed = tolower(pressed);
	} while (!(pressed == 'y' || pressed == 'n'));
	
	if (pressed == 'y')
	{
		clrscr(); 
		exit(1);
	}
	return;
}

int mainMenu(void)
{
	int x = 10, y = 5;
	int yStart = y;
	
	int selected;
	
	clrscr(); 
	
	gotoxy(x,y++);
	printf("New Game\n");
	gotoxy(x,y++);
	printf("High Scores\n");
	gotoxy(x,y++);
	printf("Controls\n");
	gotoxy(x,y++);
	printf("Exit\n");
	gotoxy(x,y++);

	selected = menuSelector(x, y, yStart);

	return(selected);
}



int main() 
{

	welcomeArt();
	
	do
	{	
		switch(mainMenu())
		{
			case 0:
				loadGame();
				break;
			case 1:
				displayHighScores();
				break;	
			case 2:
				controls();
				break;		
			case 3:
				exitYN(); 
				break;			
		}		
	} while(1);	
	
	return(0);
}