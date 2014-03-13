#include "CheckInput.h"
double factorial(double n)
{
	if (n > 0)
		return n*factorial(n-1);
	else 
		return 1;
}
void main()
{
	int n;
	bool key = true;
	do
	{
		cout << "Enter number to calculate factorial (q - exit): ";
		if (!(cin >> n))
		{
			cout << "Good luck." << endl;
			break;
		}
		if (n > 170)
		{
			cout << "There is too bug number for calcilating.";
		} 
		else
			cout << n << "! = " << factorial(n) << endl;
	}
	while(true);
	system("pause");
}
