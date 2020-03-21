#include <string>
#include "skill.h"

#ifndef SKILLSET_H
#define SKILLSET_H
using namespace std;

struct skillSet{

	skill s1;
	skill s2;	
	void setWarrior();
	void displaySkills(){
		cout << "1) ";
	       	s1.displayInfo();
		cout << "2) ";
		s2.displayInfo();	
	}
	string getSSS1Name(){
		return s1.getSkillName();
	}
	int getSSS1Damage(){
		return s1.getSkillDamage();
	}
	string getSSS1Effect(){
		return s1.getSkillEffect();
	}
	string getSSS2Name(){
                return s2.getSkillName();
        }
        int getSSS2Damage(){
                return s2.getSkillDamage();
        }
        string getSSS2Effect(){
                return s2.getSkillEffect();
        }

};
#endif
