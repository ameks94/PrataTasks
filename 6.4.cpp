#include "CheckInput.h"
#include <ctype.h>
const short strsize = 30;
struct bop {
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int preference;
};
void main ()
{
	bop programmer[3];
	strcpy(programmer[0].fullname,"Alexey Dymytrov");
	strcpy(programmer[0].title,"Senior");
	strcpy(programmer[0].bopname,"PRO");
	programmer[0].preference = 0;
	strcpy(programmer[1].fullname,"Poliakov Denis");
	strcpy(programmer[1].title,"Senior");
	strcpy(programmer[1].bopname,"God");
	programmer[1].preference = 2;
	strcpy(programmer[2].fullname,"Gorodisky Kirill");
	strcpy(programmer[2].title,"Junior");
	strcpy(programmer[2].bopname,"master");
	programmer[2].preference = 1;
	char repeat = true;
	do
	{
		system("cls");
		cout << "Benevolent Order of Programmers Report" << endl;
		cout << "a. display by name    " << "b. display by title" <<endl;
		cout << "c. display by bopname " << "d. display by preference" << endl;
		cout << "q. quit" << endl;
		char key = getch();
		switch(key)
		{
		case 'a': 
			{
				for (short i = 0; i < 3; i++)
					  cout << programmer[i].fullname << endl;
				break;
			}
		case 'b':
			{
				for (short i = 0; i < 3; i++)
					  cout << programmer[i].title << endl;
				break;
			}
		case 'c':
			{
				for (short i = 0; i < 3; i++)
					  cout << programmer[i].bopname << endl;
				break;
			}
		case 'd':
			{
				for (short i=0; i < 3; i++)
				{
					if (!programmer[i].preference)
						cout << programmer[i].fullname << endl;
					else if (programmer[i].preference == 1)
						cout << programmer[i].title << endl;
					else if (programmer[i].preference == 2)
						cout << programmer[i].bopname << endl;
				}
				break;
			}
		case 'q': repeat = false;
		}
		system("pause");
	}
	while (repeat);
	system("pause");
}

