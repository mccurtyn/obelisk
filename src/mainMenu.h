#include <iostream>
#include <fstream>
#include <ncurses.h>
#include "save.h"
#include "mSysdef.h"
#include "cUtil.h"
using namespace std;

struct mainMenu{

private:

public:
	void print_menu(WINDOW *menu_win, int highlight);
	void loop (save& s);
};
