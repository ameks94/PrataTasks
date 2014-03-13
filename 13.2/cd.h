#pragma once
#include <iostream>
class Cd
{
private: 
	char * performers;
	char * label;
	int selections;
	double playtime;
public:
	Cd(char * s1, char * s2, int n, double x);
	Cd(const Cd & d);
	Cd() : selections(2), playtime(345.6)
	{
		std::cout << "Constructor Cd.............." << std::endl;
		performers = new char[5]; 
		label = new char[4];
		strcpy(performers,"Nova");
		strcpy(label,"ten");
	}
	Cd & operator=(const Cd & d);
	virtual ~Cd();
	virtual void Report() const;
};

