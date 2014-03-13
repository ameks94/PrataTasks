#include "CheckInput.h"
float harmonic(int a, int b)
{
	return 2*a*b/(a+b);
}

void main()
{	
	bool key = true;
	do
	{
		int a,b;
		cout << "Enter pair of numbers: " << endl;
		while(!(cin >> a >> b))
		{
			cout << "Incorrect number. Please, try again." << endl;
			cin.clear();
			cin.sync();
		}
		if (a!=0 && b!=0)
			cout << "Harmonic mean: " << harmonic(a,b) << endl;
		else
			key = false;
	}
	while (key);
	system("pause");
}

