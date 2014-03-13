#include "cd.h"
#include <iostream>
#pragma once

class Classic : public Cd
{
private:
	char * MainTrack;
public:
	Classic(char *s0, char * s1, char * s2, int n, double x);
	Classic(Classic const &);
	Classic() : Cd()
	{
		std::cout << "Constructor CLASSIC.............." << std::endl;
		MainTrack = new char[10];
		strcpy(MainTrack,"Good day");
	}
	virtual void Report() const
	{
		Cd::Report();
		std::cout << "The main track: " << MainTrack << std::endl;
	}
	Classic & operator=(const Classic &);
	virtual ~Classic(void);
};

