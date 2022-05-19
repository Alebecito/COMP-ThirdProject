
 
 





 

int salir_ncurses(); 
void dibujar_marco(); 
void *hiloposiciones(); 
void *hilomoverpelota(); 
void dibujar_pelota(); 
void pintar_paleta(); 
void direc_aleatoria(); 
void escojer_dificultad(); 

 
 

int x_pelota, y_pelota, x_paleta, y_paleta, dpx_pelota, dpy_pelota, dificultad;
char key; 

pthread_t idhiloposiciones; 
pthread_t idhilomoverpelota; 
int error_hilo1, error_hilo2; 

 
 
int main()
{
	initscr(); 
	noecho(); 
 
        dibujar_marco(); 
	pintar_paleta(); 
        dibujar_pelota();  
	direc_aleatoria(); 
	escojer_dificultad(); 
 
	srand( time(NULL) ); 
 
	error_hilo1 = pthread_create(&idhiloposiciones, NULL, hiloposiciones, NULL); 
	error_hilo2 = pthread_create(&idhilomoverpelota, NULL, hilomoverpelota, NULL); 
 
	if (error_hilo1 != 0 && error_hilo2 != 0) 
	{
		clear();
		move(LINES/2,COLS/2);
		printw("ERROR AL CREAR HILOS DE EJECUCIÓN.");
		return -1;	
	} 
 
	while( key != 'e' && key != 'E' )
	{
		key = getch();
		if (key == 'w' || key == 'W') { x_paleta = x_paleta - 1; }
		if (key == 's' || key == 'S') { x_paleta = x_paleta + 1; }
		if (key == 'a' || key == 'A') { y_paleta = y_paleta - 1; }
		if (key == 'd' || key == 'D') { y_paleta = y_paleta + 1; }
	}
 
	salir_ncurses(); kill(&idhiloposiciones); kill(&hilomoverpelota); return 0; 
 
}
 
void *hiloposiciones()
{
	for(;;) 
	{
	    int i; 
 
	    clear(); 
	    dibujar_marco(); 
 
            
            if (y_paleta != 0 && y_paleta <= COLS -1 && x_paleta != 0 && (x_paleta - 3) != LINES - 1) 
	    {
	    	for( i=0; i<4; i++ )
	        {
			move(x_paleta + i, y_paleta);
			printw("#");
	        }
	    } else 
	     {
                   if (y_paleta <= 0) 
		   {
			y_paleta = 1; 
		   	for( i=0; i<4; i++ )
	                {
				move(x_paleta + i, y_paleta);
				printw("#");
	           	}	
		   }
 
            	   if (y_paleta >= COLS - 1)
		   { 
		   	y_paleta = COLS - 2; 
		   	for( i=0; i<4; i++ )
	               	{
				move(x_paleta + i, y_paleta);
				printw("#");
           	 	}
		   }
 
            	   if (x_paleta <= 0) 
		   { 
		   	x_paleta = 1;
		   	for( i=0; i<4; i++ )
	               	{
				move(x_paleta + i, y_paleta);
				printw("#");
           	 	}
		   }
 
		   if ( (x_paleta + 3) >= LINES - 1) 
		   { 
		   	x_paleta = LINES - 4;
		   	for( i=0; i<4; i++ )
	               	{
				move(x_paleta + i, y_paleta);
				printw("#");
           	 	}
		   }
	      }	
 
	     
	     move(x_pelota, y_pelota); 
	     printw("O"); 
 

 
	     if (y_pelota <= 0) 
	     {
	  	    kill(idhiloposiciones); kill(idhilomoverpelota);
		    clear();
	  	    move(LINES/2,COLS/2);
	  	    printw("FIN DEL JUEGO!");
	     }
 
	     if ( (y_pelota == y_paleta) && ((x_pelota == x_paleta) || (x_pelota == x_paleta + 1) || (x_pelota == x_paleta + 2)  || (x_pelota == x_paleta + 3)) ) 
	     {
  	     	   dpy_pelota = - dpy_pelota; 
	     	   y_pelota = y_pelota + dpy_pelota; 
	     }
 
	     usleep(20*1000); 
	     refresh(); 
 
	}
}
 

void *hilomoverpelota()
{
	for(;;)
	{
	     if (!( (y_pelota == y_paleta) && ((x_pelota == x_paleta) || (x_pelota == x_paleta + 1) || (x_pelota == x_paleta + 2)  || (x_pelota == x_paleta + 3))) )
	     {   
                     x_pelota = x_pelota + dpx_pelota; 
		     y_pelota = y_pelota + dpy_pelota;
	     }
 
	     if (x_pelota <= 1) 
	     {
	     	 dpx_pelota = - dpx_pelota;
	     }
 
	     if (x_pelota >= LINES - 1) 
	     {
	     	 dpx_pelota = - dpx_pelota;     
	     }
 
	     if (y_pelota >= COLS - 1) 
	     {
	     	 dpy_pelota = - dpy_pelota;     
	     }
 
	     usleep( dificultad*1000 );
	}
}
 
 
 
 
 

 
int salir_ncurses()
{
	endwin();
	return 0;
}
 
void dibujar_marco()
{
	int i;
        for(i=0;i<LINES;i++) 
        {
        	move(i,0);
        	printw("|");
        	move(i,COLS - 1);
        	printw("|");
        }
 
	for(i=0;i<COLS-1;i++)
	{
		move(0,i);
		printw("_");
		move(LINES -1,i);
		printw("_");
	}
}
 
void dibujar_pelota() 
{
	x_pelota = (int) ( rand() % ((LINES/2+4)-(LINES/2-4)+1) + (LINES/2 - 4) ); 
	y_pelota = (int) ( rand() % ( (((COLS-1) - COLS/9) + 4)-(((COLS-1) - COLS/9) - 4)+1 ) + (((COLS-1) - COLS/9) - 4) );
	move(x_pelota, y_pelota);
	printw("O");	
}
 
 
void pintar_paleta() 
{
	int i;
	y_paleta = 3; 
	x_paleta = LINES/2 - 3; 
 
	for( i=0; i<4; i++ )
	{
		move(x_paleta + i, y_paleta);
		printw("#");
	}
}
 
void direc_aleatoria() 
{
	dpx_pelota = ( rand() % (+1 - (-1) +1) + (-1) );
	dpy_pelota = -1;
 
}
 
 
void escojer_dificultad() 
{
	char d;
	clear();
	move(3,3);
	printw("\n-Creado por Juan Escudero Pedrosa.\n"
	       "-Indique el nivel de dificultad:\n"
	       "\t1 - Fácil.\n"
	       "\t2 - Medio.\n"
	       "\t3 - Difícil.\n\n"
	       "\t(Los controles son W,S,A y D)");
	d = getch();
	switch(d)
	{
		case '1': dificultad = 200; break;
		case '2': dificultad = 100; break;
		case '3': dificultad = 50; break; 
		default: 
			clear(); 
			move(3,3); 
			printw("No se ha seleccionado ningún nivel de dificultad, se tomará por defecto el nivel 2 (Medio). Pulse una tecla para continuar.");
	                dificultad = 100;
			getch();
		break;
	}
 
}
 