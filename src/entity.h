#include <string>
#pragma once

using namespace std;

class entity {
private:
	string name;
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
	void setEntName(string n){
		name = n;
	}
	string getEntName(){
		return name;
	}
};
