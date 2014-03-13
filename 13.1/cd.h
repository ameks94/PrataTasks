#pragma once
#include <iostream>
class Cd
{
private: 
	char performers[50];
	char label [20];
	int selections;
	double playtime;
public:
	Cd(char * s1, char * s2, int n, double x);
	Cd(const Cd & d);
	Cd()
	{
		strcpy(performers,"Nova");
		strcpy(label,"ten");
		selections = 2;
		playtime = 349.43;
	}
	virtual ~Cd();
	virtual void Report() const;
};

