#include "player.h"

void player::setClassInfoSkillSet(int choice){

	pCI.setClassSkillSet(choice);	
}
string player::getClassInfoSkillSet(){

	return pCI.getClassSkillSet();
}
