#include <iostream>
#include "cpmv.h"
using namespace std;

int main(void)
{
	Cpmv c1;
	Cpmv c2("First", "Second");
	Cpmv c3(c1);
	Cpmv c4(c1 + c2);
	Cpmv c5;
	Cpmv c6;
	c5 = c2;
	c6 = c4 + c5;

	c1.Display();
	c2.Display();
	c3.Display();
	c4.Display();
	c5.Display();
	c6.Display();

	system("pause");
	return 0;
}