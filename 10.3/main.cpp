#include "golf.h"
#include <iostream>
using namespace std;

void main()
{
	Golf g;

	g.showgolf();
	cout << endl;

	g.handicap1(12);
	cout << "After changing: " << endl;
	g.showgolf();

	while(g.setgolf())
	{
		cout << "Your record:" << endl;
		g.showgolf();
		cout << endl;
	}
	system("pause");
}