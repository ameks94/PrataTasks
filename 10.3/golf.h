#ifndef GOLF_H
#define GOLF_H
#include <iostream>
using namespace std;
const int Len = 40;

class Golf
{
private:
	char fullname[Len];
	int handicap;
public:
	Golf(const char * name = "Ann Birdfree", int hc = 24);
	int setgolf();
	void handicap1( int hc);
	void showgolf();
};

#endif