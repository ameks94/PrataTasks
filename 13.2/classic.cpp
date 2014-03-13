#include "classic.h"


Classic::Classic(char *s0, char * s1, char * s2, int n, double x)
	: Cd(s1,s2,n,x)
{
	MainTrack = new char[strlen(s0) + 1];
	strcpy(MainTrack,s0);
}

Classic::Classic(Classic const &a): Cd(a)
{
	MainTrack = new char[strlen(a.MainTrack) + 1];
    strcpy(MainTrack, a.MainTrack);
}

Classic & Classic::operator=(const Classic & d)
{
	if(this == &d)
		return *this;
	MainTrack = new char[strlen(d.MainTrack) + 1];
	Cd::operator=(d);
	strcpy(MainTrack,d.MainTrack);
	return *this;
}

Classic::~Classic(void)
{
	delete [] MainTrack;
}
