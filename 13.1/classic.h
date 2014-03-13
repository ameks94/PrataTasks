#include "cd.h"
#include <iostream>
#pragma once

class Classic : public Cd
{
private:
	char MainTrack[50];
public:
	Classic(char *s0, char * s1, char * s2, int n, double x);
	Classic() : Cd()
	{
		MainTrack,"Good day";
	}
	virtual void Report() {
		Cd::Report();
		std::cout << "The main track: " << MainTrack << std::endl;
	}
	virtual ~Classic(void);
};

