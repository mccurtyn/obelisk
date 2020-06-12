#include "fight.h"

vector<boss> fight::fightStart(player& p){
	int bossAmount =0;
	int minionAmount=0;
	for (vector<boss> :: iterator it = bosses.begin(); it != bosses.end(); it++){
		bossAmount++;
	}
	for (vector<monster> :: iterator it = minions.begin(); it != minions.end(); it++){
		minionAmount++;
	}
	switch (bossAmount){
		case 0:
			switch (minionAmount){
				case 0:
					break;
				default:
					onlyMinions(p);
					break;
			}
			break;
		case 1:
			switch (minionAmount){
                                case 0:
                                        break;
                                case 1:
                                        break;
                                default:
                                        break;
                        }
                        break;
		default:
			switch (minionAmount){
                                case 0:
                                        break;
                                case 1:
                                        break;
                                default:
                                        break;
                        }
                        break;
	}
	return bosses;
}
void fight::onlyMinions(player& p){
	while (minions.size()>0 && p.getHealth() > 0){
		displayEnemyList();
		playerTurn(p);
	}
}
void fight::playerTurn(player& p){

        int choice =0;
	int mChoice = 0;
	bool valid = false;
        while(choice <=0 || choice >=3){
                cout << "Choose your skill:" << endl;
                p.displayPlayerSkills();
                cin >> choice;
                if (cin.fail()){
                        cin.clear();
                        cin.ignore();
                }
        }
	if (choice == 1){
		mChoice =0;
		while (valid == false){
			cout << "Pick an enemy" << endl;
			cin >> mChoice;
			valid =validChoice(mChoice);	
		}
		damageMonster(mChoice);
		damagePlayer(p);
	}

	//playerResponse(p,choice);
}
void fight::displayEnemyList(){
	
	int i =0;
	for( i; i < bosses.size(); i++){
		cout << i+1 << ") " << bosses[i].getBossName()<< " " << bosses[i].getBossHealth() << endl;
	}
	for(int j=0; j < minions.size(); j++){
		cout << i+1 << ") " << minions[i].getMonsterName() << " " << minions[i].getMonsterHealth() << endl;
		i++;
	}
}
bool fight::validChoice(int c){
	
	if (bosses.size() <= c){
		c = c-bosses.size();
	} else {
		return true;
	}
	if (c <=minions.size()){
		return true;
	} else {
		cout << "Not valid" << endl;
		return false;
	}	
}
void fight::damageMonster(int c){

	if (bosses.size() <= c){
                c = c-bosses.size();
        } else {
                bosses[c-1].setBossHealth(bosses[c-1].getBossHealth()-1);
		bosses.erase(bosses.begin()+(c-1));
        }
        if (c <=minions.size()){
                minions[c-1].setMonsterHealth(minions[c-1].getMonsterHealth()-1);
        	if (minions[c-1].getMonsterHealth() ==0){
			minions.erase(minions.begin()+(c-1));
		}
	}
}
void fight::damagePlayer(player& p){

	fromBosses(p);
	fromMinions(p);
}
void fight::fromBosses(player& p){

}
void fight::fromMinions(player& p){
	
	for (int i=0; i<minions.size(); i++){
		cout << minions[i].getMonsterName() << " hits you for " << minions[i].getMonsterDamage() << endl;
		p.setHealth(p.getHealth()-minions[i].getMonsterDamage());
		cout << "You have " << p.getHealth() << " health remaining." << endl;
	}
}
