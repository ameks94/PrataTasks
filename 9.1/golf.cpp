#include "golf.h"
void setgolf(golf & g, const char * name, int hc)
{
	strcpy(g.fullname,name);
	g.handicap = hc;
}

int setgolf(golf & g)
{
	cout << "Enter the name: ";
	cin.clear();
	cin.sync();
	cin.getline(g.fullname,Len);

	cout << "Enter handicap: ";
	while(!(cin >> g.handicap))
	{
		cin.clear();
		cin.sync();
		cout << "Ups, enter integer handicap: ";
	}

	if(!g.fullname[0])
		return 0;
	else 
		return 1;
}

void handicap(golf &g, int hc)
{
	g.handicap = hc;
}

void showgolf(const golf &g)
{
	cout << "Name: " << g.fullname << endl;
	cout << "Handicap: " << g.handicap << endl;
}