#include "cUtil.h"

void inputVal(){

        if (cin.fail()){
        	cin.clear();
                cin.ignore();
        }
}
void printMenu(WINDOW* menu, int highlight, const char *list[], int size){

	int x, y, i;

        x = 2;
        y = 2;
        box(menu, 0, 0);
        for(i = 0; i < size; ++i)
        {       if(highlight == i + 1) /* High light the present choice */
                {       wattron(menu, A_REVERSE);
                        mvwprintw(menu, y, x, "%s", list[i]);
                        wattroff(menu, A_REVERSE);
                }
                else
                        mvwprintw(menu, y, x, "%s", list[i]);
                ++y;
        }
        wrefresh(menu);
}

int evalMenu(int &highlight, int c, int &choice, int size){
	switch(c)
                {       case KEY_UP:
                                if(highlight == 1)
                                        highlight = size;
                                else
                                        --highlight;
                                break;
                        case KEY_DOWN:
                                if(highlight == size)
                                        highlight = 1;
                                else
                                        ++highlight;
                                break;
                        case 10:
                                choice = highlight;
                                break;
                }
}
