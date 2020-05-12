#include "boss.h"

string boss::getBossWarning (boss& b){
	
	if (b.counter % b.specialTurn == 0 ){
		b.bossWarning="He prepares a special attack";
	} else {
		b.bossWarning="He prepares to swing at you";	
	}
	return b.bossWarning;
}

