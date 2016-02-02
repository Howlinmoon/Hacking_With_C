#include <ncurses.h>
#include <unistd.h>

#define DELAY 30000

int main(int argc, char *argv[]) {
	
	// our current co-ords
	int x = 0, y = 0;

	// the maximum co-ords
	int max_x = 0, max_y = 0;

	int next_x = 0;
	int direction = 1;

	// setup the screen display
	initscr();
	noecho();
	curs_set(FALSE); // disable the cursor

	// Global 'stdscr' was created by calling 'initscr()'
	getmaxyx(stdscr, max_y, max_x);
	// display our current maximums roughly in the middle
	mvprintw(max_y/2, max_x/2, "Max X: %d, Y: %d", max_x, max_y);
	refresh();
	sleep(10);
	
	while(1) {
		clear(); // clear the screen
		mvprintw(y, x, "o");  // print our 'ball' at the current x,y position (note y before x!)
		refresh(); // needed to actually update the screen

		usleep(DELAY); // small sleep

		next_x = x + direction;

		// hit a boundary?
		if (next_x >= max_x || next_x < 0) {
			// toggle our increment for next time
			direction *= -1;
		} else {
			// increment our x
			x += direction;
		}

	}

	endwin();  // shut down
}