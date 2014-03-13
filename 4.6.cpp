#include "CheckInput.h"
struct CandyBar
{
	char name[20];
	double weight;
	int calories;
};

void main ()
{
	CandyBar mas[3];

	for (short i = 0; i < 3; i++)
	{
		strcpy(mas[i].name, "Candy");
		mas[i].weight = i * 0.3454 - 0.1;
		mas[i].calories = i * 25 + 5;
	}
	for (short i = 0; i < 3; i++)
		cout << "Name: " << mas[i].name << "\nWeight: " << mas[i].weight
		<< "\nCalories: " << mas[i].calories << endl << endl;

	system("pause");
}

