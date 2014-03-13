#include "CheckInput.h"

void main ()
{
	int a,b,c=0;
	input(&a, "Enter integer minimal value: ");
	input(&b, "Enter integer maximal value: ");
	for (int i = a; i <= b; i++)
		c += i;
	cout << c << endl;
	system("pause");
}

