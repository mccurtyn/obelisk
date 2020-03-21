#include <string>
#pragma once

class entity {
private:
	int health;
	bool alive;
public:
	void setEntHealth(int h){
		health =h;
	}
	int getEntHealth(){
		return health;
	}
	void setEntAlive(bool a){
		alive =a;
	}
	bool getEntAlive(){
		return alive;
	}
};
