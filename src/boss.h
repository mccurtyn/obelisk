#pragma once
#include <string>
#include "entity.h"
#include <jsoncpp/json/json.h>
#include <iostream>
#include <fstream>
using namespace std;

struct boss{

private:
	string bossName;
	entity ent;
	int damage;
	int specialStrength;
	int specialDamage;
	int counter;
	int specialTurn;
	bool bossState;
	string bossWarning;
public:
	void setBossName(string n){
		bossName = n;
	}
	string getBossName(){
		return bossName;
	}
	
	void setBossHealth(int h){
		ent.setEntHealth(h);
	}
	int getBossHealth(){
		return ent.getEntHealth();
	}

	void setBossDamage(int d){
		damage = d;
	}
	int getBossDamage(){
		return damage;
	}
	
	void setBossSpecialStrength(int s){
		specialStrength= s;
	}
	int getBossSpecialStrength(){
		return specialStrength;
	}
	
	void setBossSpecialCounter(int c){
		counter = c;
	}
	int getBossSpecialCounter(){
		return counter;
	}

	void setBossSpecialTurn(int st){
		specialTurn=st;
	}
	int getBossSpecialTurn(){
		return specialTurn;
	}
	void setSpecialDamage(int d){
		specialDamage = d;
	}
	int getSpecialDamage(){
		return specialDamage;
	}
	void setBossState(bool b){
		bossState = b;
	}
	bool getBossState(){
		return bossState;
	}
	string getBossWarning(boss& b);
};

