#include "CheckInput.h"

void main ()
{
	int a=0;
	input(&a, "Enter the distance in furlongs: ");
	cout << "Yards: " << a*220 << endl;
	system("pause");
}

