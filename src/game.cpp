#include "game.h"

void game::start(){
	mainMenu mm;
	///Loaated in the game start header
        gameStart gs;
        ///Located in the game Middle header
        gameMiddle gm;
        ///Located in the player header starts an instance of player
        player p;
        ///Starts the game mostly for initializing and settting class and name
	mm.loop();
        gs.full(p);
        ///Starts the actual game
        gm.gameLoop(p);
}
