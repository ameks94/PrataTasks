#include "CheckInput.h"
short call = 1;

void OutString (char *str, int num = 0)
{
	if (num != 0)
		for (short i = 0; i < call; i++)
			cout << str << endl;
	else
		cout << str <<endl;
	call++;
}

void main ()
{
	char answer;
	do {
		short num;
		system ("cls");
		input(&num,"Enter num: ");
		OutString("Hello World",num);
		cout << "Exit - ESC." << endl;
		answer = getch();
	}
	while (answer != char(27));
}