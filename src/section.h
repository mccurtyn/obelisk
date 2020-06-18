#include <ncurses.h>
#include <string>

using namespace std;
struct Section {
private:
	WINDOW* area;
	string name;
	int startx;
	int starty;
	int width;
	int height;
	int centerx;
	int centery;
	string nickname;
	string position;
public:
	Section()
	{
	}
	Section(WINDOW* a, string n, int x, int y, int w, int h, string pos)
	{
		area = a;
		name = n;
		startx = x;
		starty = y;
		width = w;
		height = h;
		position = pos;
		nickname = n[0];
		centerx = w/2;
		centery =h/2;
	}
	void centerTitle();
	void displaySection();	
};
