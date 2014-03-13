#include "CheckInput.h"
struct Pat 
{
	string name;
	double summ;
};
void main ()
{
	short n;
	bool none = true;
	Pat *patrons;
	input(&n,"Enter number patrons: ");
	patrons = new Pat[n];
	for (short i = 0; i < n; i++)
	{
		cout << i + 1 << " Patron" << endl;
		input(&patrons[i].name,"Name: ");
		input(&patrons[i].summ,"Donation in dollars: ");
	}
	cout << endl << "Grand Patrons" << endl;
	for (short i = 0; i < n; i++)
	{
		if (patrons[i].summ >= 10000)
		{
			cout << patrons[i].name << endl;
			none = false;
		}
	}
	if (none) cout << "none" << endl;
	none = true;
	cout << endl << "Patrons" << endl;
	for (short i = 0; i < n; i++)
	{
		if (patrons[i].summ < 10000)
		{
			cout << patrons[i].name << endl;
			none = false;
		}
	}
	if (none) cout << "none" << endl;
	system("pause");
}

