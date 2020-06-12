#include <string>
#include <vector>
#include "monster.h"
#include "player.h"
#include "boss.h"

#pragma once 

using namespace std;

struct fight{
private:
	vector<monster> minions;
	vector<boss> bosses;
	vector<monster> allies;
	struct target{
	public:
		string choice;
		int position;
	};		
public:
	void addMonster(monster m){
		minions.push_back(m);
	}
	void addBoss(boss b){
		bosses.push_back(b);
	}
	void addAllies(monster a){
		allies.push_back(a);
	}
	vector<boss> fightStart(player& p);
	void onlyMinions(player& p);
	void playerTurn(player& p);
	void displayEnemyList();
	bool validChoice(int c);
	void damageMonster(int c);
	void damagePlayer(player& p);
	void fromBosses(player& p);
	void fromMinions(player& p);
};
