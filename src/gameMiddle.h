#include <string>
#include <iostream>
#include <vector>
#include "player.h"
#include "boss.h"
#include "fight.h"
#include "mSysdef.h"
#include "storyReader.h"
#include "monster.h"
using namespace std;

struct gameMiddle{
	int choice;
	void gameLoop(player& p, vector<string> story, vector<boss>& bosses, vector<monster>& m);
	void playerTurn(player& p, boss& b);
	void playerResponse(player& p, int choice, boss& b);
	void bossTurn(player& p, boss& b);
	monster findMinion(string s, vector<monster> m);
};
