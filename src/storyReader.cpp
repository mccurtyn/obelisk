#include "storyReader.h"
void storyReader::ch1Reader (vector<string> story){

	cin.ignore();
	for (vector<string> :: iterator it = story.begin(); it != story.end(); it++)
	{
		if (*it != "Continue"){
			cout << *it << "\n";
		}
		else{
			cout << "Press Enter to continue"<< endl;
                        cin.ignore(numeric_limits<streamsize>::max(),'\n');
                        system(CLEAR);
		}
        }

	/*string line, trash;
	ifstream infile(pClass);
	cin.ignore();
	system(CLEAR);
	if (infile.is_open()){
    		while ( getline(infile,line) ) {
			if  (line != "Continue")
				cout << line << '\n';
			else {	
				cout << "Press Enter to continue"<< endl;
				cin.ignore(numeric_limits<streamsize>::max(),'\n');
				system(CLEAR);
			}
    		}
    	infile.close();
  	}	
	cout << pClass << endl;*/
}
