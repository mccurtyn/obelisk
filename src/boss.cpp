#include "boss.h"

boss chooseBoss(int choice){

	boss b;
	switch  (choice) {
		case 1 : 
			b.Eurysial(b); 
			break;
		case 2 : 
			b.Dorumgir(b);
			break;
		case 3 : 
			b.Cinziel(b);
			break;
	}
	return b;
}

void  boss::Eurysial (boss& b){

	b.bossName = "Eurysial, Destruction Incarnate";
	b.specialStrength =1;
	b.specialTurn=5;
	b.damage=1;
	b.setBossHealth(9);
	b.counter =1;
	b.specialDamage=100;
	b.bossState=1;
}

void boss::Dorumgir (boss& b){

	b.bossName = "Dorumgir, the Loathing";
        b.specialStrength =1;
        b.specialTurn=4;
        b.damage=1;
        b.setBossHealth(9);
        b.counter =1;
        b.specialDamage=100;
        b.bossState=1;
}

void boss::Cinziel (boss& b){

	b.bossName = "Cinziel, Lord of Lies";
	b.specialStrength =1;
        b.specialTurn=3;
        b.damage=1;
        b.setBossHealth(9);
        b.counter =1;
        b.specialDamage=100;
        b.bossState=1;
}
string boss::getBossWarning (boss& b){
	
	if (b.counter % b.specialTurn == 0 ){
		b.bossWarning="He prepares a special attack";
	} else {
		b.bossWarning="He prepares to swing at you";	
	}
	return b.bossWarning;
}

