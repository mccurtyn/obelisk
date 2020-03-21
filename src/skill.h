#include <string>
#include <iostream>
using namespace std;

#ifndef SKILL_H
#define SKILL_H
struct skill{
private:
	string skillName;
	int damage;
	string effect;
public:
	void setSkillName(string s){
		skillName=s;
	}
	string getSkillName(){
		return skillName;
	}

	void setSkillDamage(int d){
		damage=d;
	}
	int getSkillDamage(){
		return damage;
	}

	void setSkillEffect(string e){
		effect =e;
	}
	string getSkillEffect(){
		return effect;
	}
	void displayInfo(){
		cout << skillName << " " << damage << " " << effect << endl;
	}
};
#endif
