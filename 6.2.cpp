#include "CheckInput.h"
#include <ctype.h>
void main ()
{
	double mas[10],summ=0;
	short n=0;
	for (short i = 0; i < 10; i++)
	{
		cout << "Enter " << i+1 << " value: ";
		cin >> mas[i];
		if (cin.get() != '\n')
		{
			cin.clear();
			cout << "Ups, it is not correct value." << endl;
			break;
		}
		n++;
		summ += mas[i];
	}
	cout << "Mean: " << summ/n << endl;
	cout << "Number of values: " << n <<endl;
	system("pause");
}

