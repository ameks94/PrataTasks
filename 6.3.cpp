#include "CheckInput.h"
#include <ctype.h>
void main ()
{
	char key;
	bool repeat = true;
	cout << "please enter one of the following choices:" << endl;
	cout << "c) carnivore   " << "p) pianist" << endl;
	cout << "t) tree        " << "g) game" << endl;
	do
	{
		key = getch();
		switch(key)
		{
		case 'c':
			{
				cout << "A maple is a carnivore." << endl;
				repeat = false;
				break;
			}
		case 'p':
			{
				cout << "A maple is a pianist." << endl;
				repeat = false;
				break;
			}
		case 't':
			{
				cout << "A maple is a tree." << endl;
				repeat = false;
				break;
			}
		case 'g':
			{
				cout << "A maple is a game." << endl;
				repeat = false;
				break;
			}
		}
	}
	while (repeat);
	system("pause");
}

