#include <string>
#include "skillSet.h"

#ifndef CLASS_H
#define CLASS_H
using namespace std;

struct classInfo{

private:
	string className;
	skillSet ss;
public:
	void setClassName(string c){
		className=c;
	}
	string getClassName(){
		return className;
	}

	void setClassSkillSet(int choice);

	string getClassSkillSet();

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
#endif
