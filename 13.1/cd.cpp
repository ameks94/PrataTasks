#include "cd.h"
using std::cout;
using std::endl;

Cd::Cd(char * s1, char * s2, int n, double x)
{
	strcpy(performers,s1);
	strcpy(label,s2);
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd & d)
{
	strcpy(performers,d.performers);
	strcpy(label,d.label);
	selections = d.selections;
	playtime = d.playtime;
}

void Cd::Report() const
{
	cout << "Performers: " << performers << endl;
	cout << "Label: " << label << endl;
	cout << "Selections number: " << selections << endl;
	cout << "PlayTime: " << playtime << endl;
}


Cd::~Cd(void)
{

}
