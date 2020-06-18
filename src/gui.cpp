#include "gui.h"

void gui::createGui(){
	int maxx,maxy;
        initscr();
        clear();
	start_color();
	init_pair(1,COLOR_MAGENTA, COLOR_MAGENTA);
	bkgd(COLOR_PAIR(1));
        getmaxyx(stdscr, maxy,maxx);
        offSetx = (maxx % 16)/2;
        offSety = (maxy & 9)/2;
        int aspectx = maxx - (maxx % 16);
        int aspecty = maxy - (maxy & 9);
        sideWidth=aspectx/4;
        midWidth=aspectx/2;
        sideHeight=aspecty/2;
        midHeight=aspecty/3;

        int tLx;
        int tLy;
        refresh();
        WINDOW* topLeft;
        WINDOW* topMiddle;
        WINDOW* topRight;
        WINDOW* botLeft;
        WINDOW* botMiddle;
        WINDOW* botRight;
        tL=createTL(topLeft);
        tM=createTM(topMiddle);
        tR=createTR(topRight);
        bL=createBL(botLeft);
	bM=createBM(botMiddle);
        bR=createBR(botRight);
	refresh();
        getch();
        endwin();
}

Section gui::createTL(WINDOW* topLeft){
        topLeft = newwin(sideHeight-1,sideWidth,0+offSety,0+offSetx);
        box(topLeft, 0,0);
        wrefresh(topLeft);

	Section sec(topLeft, "Prompt", 0, 0, sideWidth, sideHeight-1, "TopLeft");
	sec.centerTitle();
	return sec;
}

Section gui::createTM(WINDOW* topMiddle){
	topMiddle = newwin(midHeight*2,midWidth,0+offSety,sideWidth+offSetx);
        box(topMiddle,0,0);
	wrefresh(topMiddle);

	Section sec(topMiddle, "Main", 0, 0, midWidth, midHeight*2, "TopMIddle");
        sec.centerTitle();
        return sec;
}

Section gui::createTR(WINDOW* topRight){
	topRight = newwin(sideHeight-1,sideWidth,0+offSety,sideWidth +midWidth+offSetx);
        box(topRight, 0,0);
	wrefresh(topRight);

	Section sec(topRight, "Settings", 0, 0, sideWidth, sideHeight-1, "TopRight");
        sec.centerTitle();
        return sec;
}
Section gui::createBL(WINDOW* botLeft){
	botLeft = newwin(sideHeight,sideWidth,sideHeight-1+offSety,0+offSetx);
        box(botLeft, 0,0);
	wrefresh(botLeft);

        Section sec(botLeft, "Equipment", 0, 0, sideWidth, sideHeight, "botLeft");
        sec.centerTitle();
        return sec;
}
Section gui::createBM(WINDOW* botMiddle){
	botMiddle = newwin(midHeight,midWidth,midHeight*2+offSety,sideWidth+offSetx);
        box(botMiddle,0,0);
	wrefresh(botMiddle);
	Section sec(botMiddle, "Skills", 0, 0, midWidth, midHeight, "BotMiddle");
        sec.centerTitle();
        return sec;
}
Section gui::createBR(WINDOW* botRight){
	botRight = newwin(sideHeight,sideWidth,sideHeight-1+offSety,sideWidth +midWidth+offSetx);
        box(botRight, 0,0);
	wrefresh(botRight);
	Section sec(botRight, "Inventory", 0, 0, sideWidth, sideHeight, "botRight");
        sec.centerTitle();
        return sec;
}
