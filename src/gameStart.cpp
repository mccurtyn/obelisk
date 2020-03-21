#include "gameStart.h"
///The full start function
void gameStart::full(player& p){

	///called to get the name
	selectname(p);
	///Calls the class
	classSelect(p);
	///Calls the init function
	setPlayerStats(p);
}

void gameStart::selectname (player& p){

	///Getting the username for the player
	string username="";
	system(CLEAR);
	cout << "What would you like your username to be:" ;
	cin >> username;
	p.setUsername(username);
}

void gameStart::classSelect ( player& p ){

	int choice =0;
	///Gets class choice
	while (choice <=0 || choice >=2){	
		cout << "Please select a class"<< endl
        	     << "1) Warrior" << endl
           	     << "2) Locked" << endl;
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

