#include "CheckInput.h"
void out (int a, int b)
{
	cout <<"Time: " << a << ":" << b << endl;
}

void main ()
{
	int a,b;
	input(&a, "Enter the number of hours: ");
	input(&b, "Enter the number of minutes: ");
	out(a,b);
	system("pause");
}
