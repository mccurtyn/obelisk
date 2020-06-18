#include <iostream>
#include <string>
#include <fstream>
#include <jsoncpp/json/json.h>
#include "player.h"
#include "boss.h"
#include "monster.h"
#include <memory>
#pragma once

using namespace std;

struct save{
private:
	string saveName;
	string charName;
	string charClass;
	bool exist;
	int playerHealth;
	vector<boss> saveBosses;
public:
	bool getExist(){
		return exist;
	}
	void setExist(bool e){
		exist =e;
	}
	void setCharName(string c){
		charName =c;
	}
	void setCharClass(string c){
		charClass =c;
	}
	void setSaveName(string s){
		saveName = s;
	}
	void setPlayerHealth(int h){
		playerHealth = h;
	}
	void loadSave(player& p, ifstream& in);
	void loadBosses(vector<boss>& b, ifstream& in);
	void loadMonsters(vector<monster>& m, ifstream& in);
	void createSave();
};

