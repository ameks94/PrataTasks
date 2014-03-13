#include "cd.h"
using std::cout;
using std::endl;

Cd::Cd(char * s1, char * s2, int n, double x) : selections(n), playtime(x)
{
	performers = new char[strlen(s1) + 1]; 
	label = new char[strlen(s2) + 1];
	strcpy(performers,s1);
	strcpy(label,s2);
}

Cd::Cd(const Cd & d) : selections(d.selections), playtime(d.playtime)
{
	performers = new char[strlen(d.performers) + 1];
	label = new char[strlen(d.label) + 1];
	strcpy(performers,d.performers);
	strcpy(label,d.label);
}

void Cd::Report() const
{
	cout << "Performers: " << performers << endl;
	cout << "Label: " << label << endl;
	cout << "Selections number: " << selections << endl;
	cout << "PlayTime: " << playtime << endl;
}

Cd & Cd::operator=(const Cd & d)
{
	if (this == &d)
		return *this;
	performers = new char[strlen(d.performers) + 1];
	label = new char[strlen(d.label) + 1];
	strcpy(performers,d.performers);
	strcpy(label,d.label);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}

Cd::~Cd(void)
{
	delete [] performers;
	delete [] label;
}
