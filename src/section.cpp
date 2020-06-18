#include "section.h"

void Section::centerTitle(){
	int titleStart;
	if(name.length() < width){
		titleStart = centerx-(name.length()/2);
		mvwprintw(area, startx, titleStart, name.c_str());
		wrefresh(area);
	} else {
		mvwprintw(area, starty, centerx, nickname.c_str());
		wrefresh(area);
	}
}
