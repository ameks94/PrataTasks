#include "golf.h"

Golf::Golf(const char * name, int hc)
{
	strcpy(fullname,name);
	handicap = hc;
}

int Golf::setgolf()
{
	cout << "Enter the name: ";
	cin.clear();
	cin.sync();
	cin.getline(fullname,Len);

	cout << "Enter handicap: ";
	while(!(cin >> handicap))
	{
		cin.clear();
		cin.sync();
		cout << "Ups, enter integer handicap: ";
	}

	if(!fullname[0])
		return 0;
	else 
		return 1;
}

void Golf::handicap1(int hc)
{ 
	handicap = hc;
}

void Golf::showgolf()
{
	cout << "Name: " << fullname << endl;
	cout << "Handicap: " << handicap << endl;
}