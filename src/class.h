#include <string>
#include "skillSet.h"
#include <vector>
#pragma once
using namespace std;

struct classInfo{

private:
	string className;
	skillSet ss;
	vector <skill> skillSets;
public:
	void setClassName(string c){
		className=c;
	}
	string getClassName(){
		return className;
	}
	string getClassSkillSet();
	void setClassSkillSet(int choice);

	void displayClassSkills(){
		ss.displaySkills();
	}
	string getCS1Name(){
		return ss.getSSS1Name();
	}
	int getCS1Damage(){
		return ss.getSSS1Damage();
	}
	string getCS1Effect(){
		return ss.getSSS1Effect();
	}
	
	string getCS2Name(){
                return ss.getSSS2Name();
        }
        int getCS2Damage(){
                return ss.getSSS2Damage();
        }
        string getCS2Effect(){
                return ss.getSSS2Effect();
        }

};
