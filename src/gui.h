#include <ncurses.h>
#include "section.h"
struct gui {
private:
	Section tL;
	Section tM;
	Section tR;
	Section bL;
	Section bM;
	Section bR;
	int offSetx;
	int offSety;
	int sideHeight;
	int sideWidth;
	int midHeight;
	int midWidth;
public:
	void createGui();
	Section createTL(WINDOW* topLeft);
	Section createTM(WINDOW* topMiddle);
	Section createTR(WINDOW* topRight);
	Section createBL(WINDOW* botLeft);
	Section createBM(WINDOW* botMIddle);
	Section createBR(WINDOW* botRight);
};
