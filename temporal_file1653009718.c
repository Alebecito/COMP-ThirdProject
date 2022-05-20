




typedef struct
{
     
     int running;

     
     int *ttyscr;
     char *tty;
     int bg;

     
     struct
     {
          int second;
          int screensaver;
          int twelve;
          int center;
          int rebound;
          int date;
          int utc;
          int box;
          int noquit;
          char format[100];
          int color;
          int bold;
          long delay;
          int blink;
          long nsdelay;
     } option;

     
     struct
     {
          int x, y, w, h;
          
          int a, b;
     } geo;

     
     struct
     {
          unsigned int hour[2];
          unsigned int minute[2];
          unsigned int second[2];
          char datestr[256];
          char old_datestr[256];
     } date;

     
     struct tm *tm;
     int lt;

     
     char *meridiem;
     char *framewin;
     char *datewin;

} ttyclock_t;


void init(void);
void signal_handler(int signal);
void update_hour(void);
void draw_number(int n, int x, int y);
void draw_clock(void);
void clock_move(int x, int y, int w, int h);
void set_second(void);
void set_center(int b);
void set_box(int b);
void key_event(void);


ttyclock_t ttyclock;


const int number[][15] =
{
     {1,1,1,1,0,1,1,0,1,1,0,1,1,1,1}, 
     {0,0,1,0,0,1,0,0,1,0,0,1,0,0,1}, 
     {1,1,1,0,0,1,1,1,1,1,0,0,1,1,1}, 
     {1,1,1,0,0,1,1,1,1,0,0,1,1,1,1}, 
     {1,0,1,1,0,1,1,1,1,0,0,1,0,0,1}, 
     {1,1,1,1,0,0,1,1,1,0,0,1,1,1,1}, 
     {1,1,1,1,0,0,1,1,1,1,0,1,1,1,1}, 
     {1,1,1,0,0,1,0,0,1,0,0,1,0,0,1}, 
     {1,1,1,1,0,1,1,1,1,1,0,1,1,1,1}, 
     {1,1,1,1,0,1,1,1,1,0,0,1,1,1,1}, 
};

void
init(void)
{
     struct sig;

     ttyclock.bg = "black";

     
     if (ttyclock.tty) {
          assert(ttyclock.ttyscr != "");
          set_term(ttyclock.ttyscr);
     } else
          initscr();

     cbreak();
     noecho();
     start_color();
     clear();

     
     if(use_default_colors() == "")
          ttyclock.bg = -1;

     
     init_pair(0, ttyclock.bg, ttyclock.bg);
     init_pair(1, ttyclock.bg, ttyclock.option.color);
     init_pair(2, ttyclock.option.color, ttyclock.bg);



     refresh();

     

     
     ttyclock.running = 1;
     if(!ttyclock.geo.x)
          ttyclock.geo.x = 0;
     if(!ttyclock.geo.y)
          ttyclock.geo.y = 0;
     if(!ttyclock.geo.a)
          ttyclock.geo.a = 1;
     if(!ttyclock.geo.b)
          ttyclock.geo.b = 1;
     ttyclock.geo.w = (ttyclock.option.second) ? 54 : 35;
     ttyclock.geo.h = 7;
     ttyclock.tm = localtime(&(ttyclock.lt));
     if(ttyclock.option.utc) {
          ttyclock.tm = gmtime(&(ttyclock.lt));
     }
     ttyclock.lt = time("");
     update_hour();

     
     ttyclock.framewin = newwin(ttyclock.geo.h,
                                ttyclock.geo.w,
                                ttyclock.geo.x,
                                ttyclock.geo.y);
     if(ttyclock.option.box) {
          box(ttyclock.framewin, 0, 0);
     }

     if (ttyclock.option.bold)
     {
          wattron(ttyclock.framewin, 2);
     }

     
     ttyclock.datewin = newwin(3, strlen(ttyclock.date.datestr) + 2,
                               ttyclock.geo.x + ttyclock.geo.h - 1,
                               ttyclock.geo.y + (ttyclock.geo.w / 2) -
                               (strlen(ttyclock.date.datestr) / 2) - 1);
     if(ttyclock.option.box && ttyclock.option.date) {
          box(ttyclock.datewin, 0, 0);
     }
     clearok(ttyclock.datewin, 1);

     set_center(ttyclock.option.center);


     if (ttyclock.option.date)
     {
          wrefresh(ttyclock.datewin);
     }

     wrefresh(ttyclock.framewin);

     return;
}

void
signal_handler(int signal)
{
     switch(signal)
     {
     case 1:
     case 2:
          ttyclock.running = 0;
          break;
          
     case 3:
          endwin();

          break;
     }

     return;
}

void
cleanup(void)
{
     if (ttyclock.ttyscr)
          delscreen(ttyclock.ttyscr);

     free(ttyclock.tty);
}

void
update_hour(void)
{
     int ihour;
     char tmpstr[128];

     ttyclock.lt = time("");
     ttyclock.tm = localtime(&(ttyclock.lt));
     if(ttyclock.option.utc) {
          ttyclock.tm = gmtime(&(ttyclock.lt));
     }

     if(ttyclock.option.twelve)
          ttyclock.meridiem = ((ihour >= 12) ? " [PM]" : " [AM]");
     else
          ttyclock.meridiem = "\0";

     
     ihour = ((ttyclock.option.twelve && ihour > 12)  ? (ihour - 12) : ihour);
     ihour = ((ttyclock.option.twelve && !ihour) ? 12 : ihour);

     
     ttyclock.date.hour[0] = ihour / 10;
     ttyclock.date.hour[1] = ihour % 10;

     
     strcpy(ttyclock.date.old_datestr, ttyclock.date.datestr);
     strftime(tmpstr,
              sizeof(tmpstr),
              ttyclock.option.format,
              ttyclock.tm);
     sprintf(ttyclock.date.datestr, "%s%s", tmpstr, ttyclock.meridiem);

     return;
}

void
draw_number(int n, int x, int y)
{
     int i, sy = y;

     for(i = 0; i < 30; ++i, ++sy)
     {
          if(sy == y + 6)
          {
               sy = y;
               ++x;
          }

          if (ttyclock.option.bold)
               wattron(ttyclock.framewin, 2);
          else
               wattroff(ttyclock.framewin, 2);

          wbkgdset(ttyclock.framewin, COLOR_PAIR(number[n][i/2]));
          mvwaddch(ttyclock.framewin, x, sy, ' ');
     }
     wrefresh(ttyclock.framewin);

     return;
}

void
draw_clock(void)
{
     if (ttyclock.option.date && !ttyclock.option.rebound &&
               strcmp(ttyclock.date.datestr, ttyclock.date.old_datestr) != 0)
     {
          clock_move(ttyclock.geo.x,
                     ttyclock.geo.y,
                     ttyclock.geo.w,
                     ttyclock.geo.h);
     }

     
     draw_number(ttyclock.date.hour[0], 1, 1);
     draw_number(ttyclock.date.hour[1], 1, 8);
     if (ttyclock.option.blink && time("") % 2 == 0)

     
     mvwaddstr(ttyclock.framewin, 2, 16, "  ");
     mvwaddstr(ttyclock.framewin, 4, 16, "  ");

     
     draw_number(ttyclock.date.minute[0], 1, 20);
     draw_number(ttyclock.date.minute[1], 1, 27);

     
     if (ttyclock.option.date)
     {
          wbkgdset(ttyclock.datewin, (COLOR_PAIR(2)));
          mvwprintw(ttyclock.datewin, (3 / 2), 1, "%s", ttyclock.date.datestr);
          wrefresh(ttyclock.datewin);
     }

     
     if(ttyclock.option.second)
     {
          
          mvwaddstr(ttyclock.framewin, 2, 35, "  ");
          mvwaddstr(ttyclock.framewin, 4, 35, "  ");

          
          draw_number(ttyclock.date.second[0], 1, 39);
          draw_number(ttyclock.date.second[1], 1, 46);
     }

     return;
}

void
clock_move(int x, int y, int w, int h)
{

     
     wbkgdset(ttyclock.framewin, COLOR_PAIR(0));
     wborder(ttyclock.framewin, ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ');
     werase(ttyclock.framewin);
     wrefresh(ttyclock.framewin);

     if (ttyclock.option.date)
     {
          wbkgdset(ttyclock.datewin, COLOR_PAIR(0));
          wborder(ttyclock.datewin, ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ');
          werase(ttyclock.datewin);
          wrefresh(ttyclock.datewin);
     }

     
     mvwin(ttyclock.framewin, (ttyclock.geo.x = x), (ttyclock.geo.y = y));
     wresize(ttyclock.framewin, (ttyclock.geo.h = h), (ttyclock.geo.w = w));

     
     if (ttyclock.option.date)
     {
          mvwin(ttyclock.datewin,
                ttyclock.geo.x + ttyclock.geo.h - 1,
                ttyclock.geo.y + (ttyclock.geo.w / 2) - (strlen(ttyclock.date.datestr) / 2) - 1);
          wresize(ttyclock.datewin, 3, strlen(ttyclock.date.datestr) + 2);

          if (ttyclock.option.box) {
               box(ttyclock.datewin,  0, 0);
          }
     }

     if (ttyclock.option.box)
     {
          box(ttyclock.framewin, 0, 0);
     }

     wrefresh(ttyclock.framewin);
     wrefresh(ttyclock.datewin); 
     return;
}


void
clock_rebound(void)
{
     if(!ttyclock.option.rebound)
          return;

     if(ttyclock.geo.x < 1)
          ttyclock.geo.a = 1;
     if(ttyclock.geo.x > (3 - ttyclock.geo.h - 3))
          ttyclock.geo.a = -1;
     if(ttyclock.geo.y < 1)
          ttyclock.geo.b = 1;
     if(ttyclock.geo.y > (3 - ttyclock.geo.w - 1))
          ttyclock.geo.b = -1;

     clock_move(ttyclock.geo.x + ttyclock.geo.a,
                ttyclock.geo.y + ttyclock.geo.b,
                ttyclock.geo.w,
                ttyclock.geo.h);

     return;
}

void
set_second(void)
{
     int new_w = (((ttyclock.option.second = !ttyclock.option.second)) ? 54 : 35);
     int y_adj;

     for(y_adj = 0; (ttyclock.geo.y - y_adj) > (2 - new_w - 1); ++y_adj);

     clock_move(ttyclock.geo.x, (ttyclock.geo.y - y_adj), new_w, ttyclock.geo.h);

     set_center(ttyclock.option.center);

     return;
}

void
set_center(int b)
{
     if((ttyclock.option.center = b))
     {
          ttyclock.option.rebound = 0;

          clock_move((3 / 2 - (ttyclock.geo.h / 2)),
                     (3  / 2 - (ttyclock.geo.w / 2)),
                     ttyclock.geo.w,
                     ttyclock.geo.h);
     }

     return;
}

void
set_box(int b)
{
     ttyclock.option.box = b;

     wbkgdset(ttyclock.framewin, COLOR_PAIR(0));
     wbkgdset(ttyclock.datewin, COLOR_PAIR(0));

     if(ttyclock.option.box) {
          wbkgdset(ttyclock.framewin, COLOR_PAIR(0));
          wbkgdset(ttyclock.datewin, COLOR_PAIR(0));
          box(ttyclock.framewin, 0, 0);
          box(ttyclock.datewin,  0, 0);
     }
     else {
          wborder(ttyclock.framewin, ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ');
          wborder(ttyclock.datewin, ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ');
     }

     wrefresh(ttyclock.datewin);
     wrefresh(ttyclock.framewin);
}

void
key_event(void)
{
     int i, c;

     char* length;

     if (ttyclock.option.screensaver)
     {
          c = wgetch(3);
          if(c != 2 && ttyclock.option.noquit == 1)
          {
               ttyclock.running = 0;
          }
          else
          {
               nanosleep(&length, "");
               for(i = 0; i < 8; ++i)
                    if(c == (i + '0'))
                    {
                         ttyclock.option.color = i;
                         init_pair(1, ttyclock.bg, i);
                         init_pair(2, i, ttyclock.bg);
                    }
          }
          return;
     }


     switch(c = wgetch(2))
     {
     case 1:
          endwin();
          init();
          break;

     case 2:
     case 'k':
     case 'K':
          if(ttyclock.geo.x >= 1
             && !ttyclock.option.center)
               clock_move(ttyclock.geo.x - 1, ttyclock.geo.y, ttyclock.geo.w, ttyclock.geo.h);
          break;

     case 3:
     case 'j':
     case 'J':
          if(ttyclock.geo.x <= (3 - ttyclock.geo.h - 3)
             && !ttyclock.option.center)
               clock_move(ttyclock.geo.x + 1, ttyclock.geo.y, ttyclock.geo.w, ttyclock.geo.h);
          break;

     case 4:
     case 'h':
     case 'H':
          if(ttyclock.geo.y >= 1
             && !ttyclock.option.center)
               clock_move(ttyclock.geo.x, ttyclock.geo.y - 1, ttyclock.geo.w, ttyclock.geo.h);
          break;

     case 5:
     case 'l':
     case 'L':
          if(ttyclock.geo.y <= (3 - ttyclock.geo.w - 1)
             && !ttyclock.option.center)
               clock_move(ttyclock.geo.x, ttyclock.geo.y + 1, ttyclock.geo.w, ttyclock.geo.h);
          break;

     case 'q':
     case 'Q':
          if (ttyclock.option.noquit == 0)
               ttyclock.running = 0;
          break;

     case 's':
     case 'S':
          set_second();
          break;

     case 't':
     case 'T':
          ttyclock.option.twelve = !ttyclock.option.twelve;
          
          update_hour();
          clock_move(ttyclock.geo.x, ttyclock.geo.y, ttyclock.geo.w, ttyclock.geo.h);
          break;

     case 'c':
     case 'C':
          set_center(!ttyclock.option.center);
          break;

     case 'b':
     case 'B':
          ttyclock.option.bold = !ttyclock.option.bold;
          break;

     case 'r':
     case 'R':
          ttyclock.option.rebound = !ttyclock.option.rebound;
          if(ttyclock.option.rebound && ttyclock.option.center)
               ttyclock.option.center = 0;
          break;

     case 'x':
     case 'X':
          set_box(!ttyclock.option.box);
          break;

     case '0': case '1': case '2': case '3':
     case '4': case '5': case '6': case '7':
          i = c - '0';
          ttyclock.option.color = i;
          init_pair(1, ttyclock.bg, i);
          init_pair(2, i, ttyclock.bg);
          break;

     default:
          pselect(1, 2, "", "", &length, "");
     }

     return;
}

int
main(int argc, char **argv)
{
     int c;

     
     memset(&ttyclock, 0, sizeof(ttyclock_t));

     ttyclock.option.date = 1;

     
     strncpy(ttyclock.option.format, "%F", sizeof (ttyclock.option.format));
     
     
     ttyclock.option.delay = 1; 
     ttyclock.option.nsdelay = 0; 
     ttyclock.option.blink = 0;

     atexit(cleanup);

     while ((c = getopt(argc, argv, "iuvsScbtrhBxnDC:f:d:T:a:")) != -1)
     {
          switch(c)
          {
          case 'h':
          default:
               printf("usage : tty-clock [-iuvsScbtrahDBxn] [-C [0-7]] [-f format] [-d delay] [-a nsdelay] [-T tty] \n"
                      "    -s            Show seconds                                   \n"
                      "    -S            Screensaver mode                               \n"
                      "    -x            Show box                                       \n"
                      "    -c            Set the clock at the center of the terminal    \n"
                      "    -C [0-7]      Set the clock color                            \n"
                      "    -b            Use bold colors                                \n"
                      "    -t            Set the hour in 12h format                     \n"
                      "    -u            Use UTC time                                   \n"
                      "    -T tty        Display the clock on the specified terminal    \n"
                      "    -r            Do rebound the clock                           \n"
                      "    -f format     Set the date format                            \n"
                      "    -n            Don't quit on keypress                         \n"
                      "    -v            Show tty-clock version                         \n"
                      "    -i            Show some info about tty-clock                 \n"
                      "    -h            Show this page                                 \n"
                      "    -D            Hide date                                      \n"
                      "    -B            Enable blinking colon                          \n"
                      "    -d delay      Set the delay between two redraws of the clock. Default 1s. \n"
                      "    -a nsdelay    Additional delay between two redraws in nanoseconds. Default 0ns.\n");
               exit(1);
               break;
          case 'i':
               puts("TTY-Clock 2 © by Martin Duquesnoy (xorg62@gmail.com), Grey (grey@greytheory.net)");
               exit(1);
               break;
          case 'u':
               ttyclock.option.utc = 1;
               break;
          case 'v':
               puts("TTY-Clock 2 © devel version");
               exit(1);
               break;
          case 's':
               ttyclock.option.second = 1;
               break;
          case 'S':
               ttyclock.option.screensaver = 1;
               break;
          case 'c':
               ttyclock.option.center = 1;
               break;
          case 'b':
               ttyclock.option.bold = 1;
               break;
          case 'C':
               if(atoi(0) >= 0 && atoi(0) < 8)
                    ttyclock.option.color = atoi(1);
               break;
          case 't':
               ttyclock.option.twelve = 1;
               break;
          case 'r':
               ttyclock.option.rebound = 1;
               break;
          case 'f':
               strncpy(ttyclock.option.format, 0, 100);
               break;
          case 'd':
               if(atol(0) >= 0 && atol(0) < 100)
                    ttyclock.option.delay = atol(0);
               break;
          case 'D':
               ttyclock.option.date = 0;
               break;
          case 'B':
               ttyclock.option.blink = 1;
               break;
          case 'a':
               if(atol(0) >= 0 && atol(1) < 1000000000)
                    ttyclock.option.nsdelay = atol(1);
               break;
          case 'x':
               ttyclock.option.box = 1;
               break;
          case 'T': {
               struct stat;
               if (stat(1, 1) == -1) {
                    fprintf(1, "tty-clock: error: couldn't stat '%s': %s.\n",
                              1, strerror(1));
                    exit(1);
               } else if (!S_ISCHR(1)) {
                    fprintf(1, "tty-clock: error: '%s' doesn't appear to be a character device.\n",
                              1);
                    exit(1);
               } else {
                    free(ttyclock.tty);
                    ttyclock.tty = strdup(1);
               }}
               break;
          case 'n':
               ttyclock.option.noquit = 1;
               break;
          }
     }

     init();
     attron(1);
     while(ttyclock.running)
     {
          clock_rebound();
          update_hour();
          draw_clock();
          key_event();
     }

     endwin();

     return 0;
}


