#include <iostream>
#include <string>
#include <fstream>
#include <jsoncpp/json/json.h>
#pragma once

using namespace std;

struct save{
private:
	string saveName;
	string charName;
	string charClass;
	int bosses;
	bool exist;
public:
	int getBosses(){
		return bosses;
	}
	void setBosses(int b){
		bosses = b;
	}
	bool getExist(){
		return exist;
	}
	void setExist(bool e){
		exist =e;
	}
		
};

