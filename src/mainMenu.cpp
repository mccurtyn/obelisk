#include "mainMenu.h"

void mainMenu::loop(save& s){

	int choice=0;
	system(CLEAR);
	while (choice <1 || choice >3){
		cout << "    OBELISK      " << endl
	     	     << "    Main Menu    " << endl
	     	     << " 1) New game     " << endl
	     	     << " 2) Load save    " << endl
	     	     << " 3) Options      " << endl;
		cin >> choice;
		inputVal();
	}
	switch(choice){
		case 1:
			break;	
		case 2: 
			s.setExist(1);
			break;
	}
}

