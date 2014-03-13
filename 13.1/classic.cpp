#include "classic.h"


Classic::Classic(char *s0, char * s1, char * s2, int n, double x)
	: Cd(s1,s2,n,x)
{
	strcpy(MainTrack,s0);
	MainTrack[49] = '\0';
}


Classic::~Classic(void)
{
}
