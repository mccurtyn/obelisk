#include <string>
#include <iostream>
#pragma once
using namespace std;

struct skill{
private:
	int skillId;
	string skillName;
	int damage;
	string effect;
public:
	void setSkillId(int s){
		skillId =s;
	}
	int getSkillId(){
		return skillId;
	}
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
