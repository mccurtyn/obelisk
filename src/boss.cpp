#include "boss.h"
///OutPuts if the boss is going to do a special attack or normal attack
string boss::getBossWarning (boss& b){

	///Uses boss warning so it can be replaces with a boss specific warning
	if (b.counter % b.specialTurn == 0 ){
		b.bossWarning="He prepares a special attack";
	} else {
		b.bossWarning="He prepares to swing at you";	
	}
	return b.bossWarning;
}

