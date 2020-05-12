#include <string>
#include "class.h"
#include "entity.h"
#pragma once
using namespace std;

struct player{

private:
	string username;
	classInfo pCI;	
	string effect;	
	entity ent;
public:	
	void setUsername(string u){
		username=u;
	}
	string getUsername(){
		return username;
	}

	void setHealth(int h){
		ent.setEntHealth(h);
	}
	int getHealth(){
		return ent.getEntHealth();
	}

	void setClassInfoName(string className){
		pCI.setClassName(className);
	}
	string getClassInfoName(){
		return pCI.getClassName();
	}

	void setEffect(string e){
		effect = e;
	}
	string getEffect(){
		return effect;
	}

	void setClassInfoSkillSet(int choice);

	string getClassInfoSkillSet();

	void displayPlayerSkills(){
		pCI.displayClassSkills();
	}
	
	string getPS1Name(){
		return pCI.getCS1Name();
	}
	int getPS1Damage(){
		return pCI.getCS1Damage();
	}
	string getPS1Effect(){
		return pCI.getCS1Effect();
	}

	string getPS2Name(){
                return pCI.getCS2Name();
        }
        int getPS2Damage(){
                return pCI.getCS2Damage();
        }
        string getPS2Effect(){
                return pCI.getCS2Effect();
        }


};
