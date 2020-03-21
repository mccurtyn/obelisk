#include "mainMenu.h"

void mainMenu::loop(){

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
			loadSave();
			break;
	}
}

void mainMenu::loadSave(){

	#define SAVE
	ifstream in("template.json");
	Json::Value bossTemp_json;
	in >> bossTemp_json;
	for (Json::Value::iterator it = bossTemp_json["boss"].begin(); it != bossTemp_json["boss"].end(); ++it){
		cout << (*it)["1"].asString() << endl;
	}
	in.close();
	cin.get();
}
