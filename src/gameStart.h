#include <string>
#include <iostream>
#include "player.h"
#include "mSysdef.h"
using namespace std;
///Sets the stage for the game
struct gameStart {

public:
	///The whole start
	void full(player& p);
	///getting the name
	void selectname (player& p);
	///Picking the class
	void classSelect (player& p);
	///Initializing the stats
	void setPlayerStats(player& p);
};
