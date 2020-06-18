#include "gameStart.h"
///The full start function
void gameStart::full(player& p){
	
	initscr();
	cbreak();
	///called to get the name
	selectname(p);
	///Calls the class
	classSelect(p);
	///Calls the init function
	setPlayerStats(p);
	endwin();
}

void gameStart::selectname (player& p){

	bool name= false;
	int c, x, y;
	///Getting the username for the player
	char username [30];
	clear();
	y=1;
	x=0;
	printw("What would you like your username to be(Max 30):");
	move(y,x);
	echo();
	while((unsigned)strlen(username) == 0 || (unsigned)strlen(username) > 30){
		getstr(username);
		if ((unsigned)strlen(username) > 30){
			move(2,0);
			printw("Name is too long");
			refresh();
			getch();
			move(2,0);
			clrtoeol();
			move(1,0);
			clrtoeol();
			refresh();
		}
	}
	//int usize =char_traits<char>::length(username);
	refresh();
	p.setUsername(username);
}

void gameStart::classSelect ( player& p ){

	WINDOW* classMenu;
	int choice =0;
	int startx =0;
	int starty=3;
	const char* classList [] {"Warrior", "Locked"};
	classMenu = newwin(6, 10, starty,startx);
	///Gets class choice
	while (choice <=0 || choice >=2){	
		printw("Please select a class");
        	refresh();
           	printMenu(classMenu,1, classList, 2);
		wrefresh(classMenu);
		refresh();
        	cin >> choice;
		if (choice == 2){
			cout << "Locked" << endl;
		}
		if (cin.fail()){

			cin.clear();
			cin.ignore();
		}
	}
	switch (choice){
                case 1: p.setClassInfoName("warrior");
			p.setClassInfoSkillSet(choice);
        }
}

void gameStart::setPlayerStats(player& p){
	///sets player health
	p.setHealth(10);
}

