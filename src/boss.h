#pragma once
#include <fstream>
#include <iostream>
#include <string>
///Monster is the basse class for boss
#include "monster.h"
using namespace std;

struct boss{

private:
	///Contains anything that isn't boss specfic like health
	monster m;
	///For later features like shield use
	int specialStrength;
	int specialDamage;
	///Might Depricate once i make a better ai attack system
	int counter;
	int specialTurn;
	string bossWarning;
public:
	///Sets all attributes for the base class
	void setBossName(string n){
		m.setMonsterName(n);
	}
	string getBossName(){
		return m.getMonsterName();
	}
	void setBossHealth(int h){
		m.setMonsterHealth(h);
	}
	int getBossHealth(){
		return m.getMonsterHealth();
	}
	void setBossDamage(int d){
		m.setMonsterDamage(d);
	}
	int getBossDamage(){
		return m.getMonsterDamage();
	}
	void setBossState(bool b){
                m.setMonsterAlive(b);
        }
        bool getBossState(){
                return m.getMonsterAlive();
        }
	///Getters and setters for boss specific attributes
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
	string getBossWarning(boss& b);
};

