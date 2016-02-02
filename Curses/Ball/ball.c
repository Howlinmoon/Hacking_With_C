#include <ncurses.h>
#include <unistd.h>

#define DELAY 30000

int main(int argc, char *argv[]) {
	
	int x = 0, y = 0;

	initscr();
	noecho();
	curs_set(FALSE); // disable the cursor

	while(1) {
		clear(); // clear the screen
		mvprintw(y, x, "o");  // print our 'ball' at the current x,y position (note y before x!)
		refresh(); // needed to actually update the screen

		usleep(DELAY); // small sleep
		x++;  // move the ball to the right

	}

	endwin();  // shut down
}