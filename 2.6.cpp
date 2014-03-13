#include "CheckInput.h"
double convert (double a)
{
	 return (a/63240);
}

void main ()
{
	double a;
	input(&a, "Enter the number of the light years: ");
	cout << a << "light years = " << convert(a) << " astronomical units." << endl;
	system ("pause");
}
