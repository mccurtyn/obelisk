#include "mainMenu.h"
#define HEIGHT 7
#define WIDTH 15
const char *choices[] = {
                        "New",
                        "load",
                        "options",
};
int n_choices = sizeof(choices) / sizeof(char *);

void mainMenu::loop(save& s){

	WINDOW *menu; //Initiates new window
	WINDOW *header;
	int choice=0;
	int highlight=1;
	int c;
	int row,col;	
	
	initscr(); //starts ncurses
	clear(); //clears screen
	noecho(); //settings
	cbreak(); 
	start_color();
	init_pair(1,COLOR_BLACK, COLOR_MAGENTA); // main backgrouns
	//init_pair(2,COLOR_WHITE, COLOR_BLUE);

	getmaxyx(stdscr,row,col); //find max rows and columns
	int startx = (col - WIDTH ) /2; //menu starting location
	int starty = (row - HEIGHT) /2;
	header =newwin(3, 15, starty-3, startx); //Title menu
	refresh();
	//wattron(header,2);//Possible color change for the border
	box(header, 0,0);
	//wattroff(header,2);
	mvwprintw(header, 1 ,1, "OBELISK");//Prints name of the game might make variable
	wbkgd(header, COLOR_PAIR(1));///colors title window
	wrefresh(header);
	menu = newwin(HEIGHT,WIDTH, starty, startx);//options window
	keypad(menu, TRUE);//Allows arrow keys
	refresh();
	wbkgd(menu, COLOR_PAIR(1));//colors option window
	//print_menu(menu, highlight);//Print option window with highlight 
	printMenu(menu,highlight, choices, 3);
	while (choice <1 || choice >3){ // loop to valadate choice 
		c = wgetch(menu); //get user input
		evalMenu(highlight, c ,choice, 3);
		/*switch(c)
		{	case KEY_UP:
				if(highlight == 1)
					highlight = n_choices;
				else
					--highlight;
				break;
			case KEY_DOWN:
				if(highlight == n_choices)
					highlight = 1;
				else
					++highlight;
				break;
			case 10:
				choice = highlight;
				break;
		}*/
		//print_menu(menu, highlight);
		printMenu(menu,highlight, choices, 3);
	}
	switch(choice){
		case 1:
			break;	
		case 2: 
			s.setExist(1);
			break;
	}
	endwin();
}

