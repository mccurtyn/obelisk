#include "gameMiddle.h"

void gameMiddle::gameLoop(player& p){

	
	storyReader sR;
	sR.ch1Reader(p.getClassInfoName());
	choice=0;
	while(choice <=0 || choice >=3){
		cout << "Who do you save?" << endl
		     << "1) Darrell" << endl
		     << "2) General" << endl;
		cin >> choice;
		if (cin.fail()){

                	cin.clear();
                	cin.ignore();
                }

	}
}

void gameMiddle::playerTurn(player& p, boss& b){

	int choice =0;
	while(choice <=0 || choice >=3){
		cout << "Choose your skill:" << endl;
		p.displayPlayerSkills();
		cin >> choice;
		if (cin.fail()){
			cin.clear();
			cin.ignore();
		}
	}
	playerResponse(p,choice, b);
}

void gameMiddle::playerResponse(player& p, int choice, boss& b){

	string name = "";
	int damage = 0;
	string effect = "";
	switch (choice) {
		case 1 :
			name=p.getPS1Name();
			damage=p.getPS1Damage();
			effect=p.getPS1Effect();
			break;
		case 2 :			
			name=p.getPS2Name();
			damage=p.getPS2Damage();
			effect=p.getPS2Effect();
			break;
	}	
	p.setEffect(effect);
	b.setBossHealth(b.getBossHealth() -damage);
	cout << b.getBossName() << " has " << b.getBossHealth() << " remaining health." << endl;
}

void gameMiddle::bossTurn(player& p, boss& b){

	if(p.getEffect() == "Damage Reduction"){
		
		cout << "You blocked this attack!" << endl;
		b.setBossSpecialCounter(b.getBossSpecialCounter()+1);
	} else {
		if(b.getBossSpecialCounter()% b.getBossSpecialTurn() == 0){
			
			p.setHealth(p.getHealth() - b.getSpecialDamage());	
			cout << p.getUsername() << " Has " <<  p.getHealth() << " remaining health!"<< endl;
		} else {
			p.setHealth(p.getHealth() - b.getBossDamage());
			cout << p.getUsername() << " Has " <<  p.getHealth() << " remaining health!"<< endl;
		}
		b.setBossSpecialCounter(b.getBossSpecialCounter()+1);
	}
	cin.ignore();
	cout << "Press Enter to continue" << endl;
	cin.get();
	system(CLEAR);
}
