#include "CheckInput.h"
float convert (float a)
{
	 return (a*9/5 + 32);
}

void main ()
{
	int a;
	float c;
	input(&a, "Please enter a Celsius value: ");
	c = convert(a);
	cout << a << " degrees Celsius is " << c <<" degrees Fahrenheit." << endl;
	system ("pause");
}
