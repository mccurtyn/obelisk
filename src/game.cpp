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
	vector<string> story;
	vector<monster> minions;
	gui g;
	g.createGui();
        ///Starts the game mostly for initializing and settting class and name
	/*mm.loop(s);
	if (!s.getExist()){
		ifstream in("template.json");
		gs.full(p);
		s.setCharName(p.getUsername());
		s.setCharClass(p.getClassInfoName());
		s.loadBosses(b, in);
		in.close();
		in.open("template.json");
		s.loadMonsters(minions, in);
		in.close();
	} else {
		ifstream in("write.json");
		s.loadSave(p, in);
		s.loadBosses(b, in);
		in.close();
		in.open("template.json");
		s.loadMonsters(minions, in);
		in.close();
	}
	loadStory(story,p.getClassInfoName()+"Story.txt");
	///Starts the actual game
	gm.gameLoop(p, story, b, minions);
*/	
}

void game::loadStory(vector<string>& story, string pClass){

	string line, trash;
        ifstream infile(pClass);
        if (infile.is_open()){
                while ( getline(infile,line) ) {
                	story.push_back(line);       		 
                }
        infile.close();
        }
}
