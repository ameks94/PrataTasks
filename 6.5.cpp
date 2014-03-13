#include "CheckInput.h"
void main ()
{
	do 
	{
		cout << "Enter your income: ";
		int num, tax=0;
		cin >> num;
		if(cin.get() != '\n')
			break;
		if (!((num -= 5000) <= 0))
			if ((num -= 10000) <= 0)
				tax += (num + 10000) * 0.1;
			else
			{
				tax = 10000 * 0.1;
				if ((num -= 20000) <= 0)
					tax += (num + 20000) * 0.15;
				else
					tax += (20000 * 0.15 + num * 0.2);
			}
		cout << "Your liable to pay tax: " << tax << endl;
	}
	while (true);
	system("pause");
}

