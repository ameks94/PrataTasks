#include "CheckInput.h"
const k = 308.4/2.539;

void main ()
{
	double d;
	input(&d, "Enter height in inches_ ");
	cout << "Futs: " << d*k << endl;
}

