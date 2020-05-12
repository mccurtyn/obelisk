#include "save.h"

void save::loadBosses(vector<boss>& b, ifstream& in){

        boss temp;
        Json::Reader reader;
        Json::Value obj;
        reader.parse(in, obj); // reader can also read strings
        const Json::Value& Boss = obj["boss"]; // array of characters
        for (int i = 0; i < Boss.size(); i++){
                temp.setBossName(Boss[i]["name"].asString());
                temp.setBossSpecialStrength(Boss[i]["specialStrength"].asInt());
                temp.setBossSpecialTurn(Boss[i]["specialTurn"].asInt());
                temp.setBossDamage(Boss[i]["damage"].asInt());
                temp.setBossHealth((Boss[i]["health"].asInt()));
                temp.setBossSpecialCounter(Boss[i]["counter"].asInt());
                temp.setSpecialDamage(Boss[i]["specialDamage"].asInt());
                temp.setBossState(Boss[i]["bossState"].asInt());

                b.push_back(temp);
		saveBosses.push_back(temp);
	}

}
void save::loadSave(player& p, ifstream& in){

        Json::Reader reader;
        Json::Value obj;
        reader.parse(in, obj);
        p.setUsername(obj["name"].asString());
        setCharName(obj["name"].asString());
	p.setClassInfoName(obj["class"].asString());
	setCharClass(obj["class"].asString());
        p.setClassInfoSkillSet(1);
	p.setHealth(10);
	setPlayerHealth(10);
}
void save::createSave(){

	#define bJson rootJsonValue["boss"][i]
	Json::Value rootJsonValue;
	rootJsonValue["name"] = charName;
	rootJsonValue["class"] = charClass;
	int i =0;
	for (vector<boss> :: iterator it = saveBosses.begin(); it != saveBosses.end(); ++it){
		bJson["name"] = (*it).getBossName();
		bJson["specialStrnegth"] = (*it).getBossSpecialStrength();
		bJson["specialTurn"] = (*it).getBossSpecialTurn();
		bJson["damage"] = (*it).getBossDamage();
		bJson["health"] = (*it).getBossHealth();
		bJson["counter"] = (*it).getBossSpecialCounter();
		bJson["specialDamage"] = (*it).getSpecialDamage();
		bJson["bossState"] = (*it).getBossState();
		i++;
	}
	Json::StreamWriterBuilder builder;
	builder["commentStyle"] = "None";
	builder["indentation"] = "   ";

	std::unique_ptr<Json::StreamWriter> writer(builder.newStreamWriter());
	std::ofstream outputFileStream("write.json");
	writer -> write(rootJsonValue, &outputFileStream);
}
