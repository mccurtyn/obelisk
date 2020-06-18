#include <iostream>
#include <vector>
#include "gameStart.h"
#include "gameMiddle.h"
#include "player.h"
#include "mainMenu.h"
#include "save.h"
#include "monster.h"
#include "gui.h"
struct game {

private:

public:
	void start();
	void loadStory(vector<string>& story, string pClass);
};

