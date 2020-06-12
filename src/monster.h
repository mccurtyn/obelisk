#include <string>
#include "entity.h"
#pragma once

using namespace std;

struct monster{
private:
	entity e;
	int damage;
public:
	void setMonsterHealth(int h){
		e.setEntHealth(h);
	}
	int getMonsterHealth(){
		return e.getEntHealth();
	}
	void setMonsterAlive(bool a){
		e.setEntAlive(a);
	}
	bool getMonsterAlive(){
		return e.getEntAlive();
	}
	void setMonsterName(string n){
		e.setEntName(n);
	}
	string getMonsterName(){
		return e.getEntName();
	}
	void setMonsterDamage(int d){
		damage = d;
	}
	int getMonsterDamage(){
		return damage;
	}
};
