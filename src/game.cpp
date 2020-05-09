#include "game.h"
void game::start(){
	mainMenu mm;
	///Located in the game start header
        gameStart gs;
        ///Located in the game Middle header
        gameMiddle gm;
        ///Located in the player header starts an instance of player
        player p;
	//Located in save header
	save s;
	vector<boss> b;
        ///Starts the game mostly for initializing and settting class and name
	mm.loop(s);
	if (!s.getExist()){
		gs.full(p);
	} else {
		loadSave(s, p);
	}
	///Starts the actual game
        gm.gameLoop(p);
}

void loadSave(save& s, player& p){

	ifstream in("save.json");
        Json::Reader reader;
        Json::Value obj;
        reader.parse(in, obj);
	p.setUsername(obj["name"].asString());
	p.setClassInfoName("warrior");
        p.setClassInfoSkillSet(1);
}
