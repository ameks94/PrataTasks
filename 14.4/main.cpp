#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include "Person.h"

int main()
{
	using std::cout;

	srand(time(NULL));

	Person P ("Marko", "Polo");
	Gunslinger g ("Hot", "Shot");
	PokerPlayer p ("Maverick");
	BadDude bd ("Clint", "Eastwood");

	P.Show(); cout << '\n';
	g.Show(); cout << '\n';
	cout << "He draws: " << g.Draw() << '\n';
	p.Show(); cout << '\n';
	cout << "He draws: " << int(p.Draw()) << '\n';
	bd.Show(); cout << '\n';
	cout << "He draws: " << bd.Gdraw() << '\n';
	cout << "And he draws again: " << int(bd.Cdraw()) << '\n';

	cout << "\nUsing an array:\n ";

	Person *arr[4] = { &P, &g, &p, &bd };

	for (int i = 0; i < 4; ++i)
	{
		arr[i]->Show(); cout << '\n';
	}
	system("pause");
	return 0;
}