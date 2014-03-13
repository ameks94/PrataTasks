#include "CheckInput.h"
struct CandyBar
{
	char name[20];
	double weight;
	int calories;
};

void main ()
{
	CandyBar snack = 
	{
		"Mocha Munch",
		2.3,
		350
	};
	cout << "Candy's name: " << snack.name << endl;
	cout << "Candy's weight: " << snack.weight << endl;
	cout << "Candy's calories: " << snack.calories << endl;
	system("pause");
}

