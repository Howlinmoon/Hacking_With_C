// demo.c
#include <ncurses.h>
#include <unistd.h>
int main(int argc, char *argv[]) {
  initscr();
  noecho();
  curs_set(FALSE);

  for (int x = 1; x <= 55; x++) {
  	for (int y = 1; y <= 10; y++) {
  		clear();
	 	mvprintw(y, x, "Hello, X = %d, Y = %d", x, y);
  		refresh();
  		usleep(100000);
  	}
  }


  endwin(); // Restore normal terminal behavior
}