#include <string>
#include <iostream>
#include "player.h"
#include "boss.h"
#include "sysdef.h"
#include "json/json.h"
#include "storyReader.h"
using namespace std;

struct gameMiddle{
	int choice;
	void gameLoop(player& p);
	void fight(player& p, boss& bossFight);
	void playerTurn(player& p, boss& b);
	void playerResponse(player& p, int choice, boss& b);
	void bossTurn(player& p, boss& b);
};
