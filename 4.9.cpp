#include "CheckInput.h"
struct CandyBar
{
	char name[20];
	double weight;
	int calories;
};

void main ()
{
	int n;
	CandyBar *mas;
	input(&n, "Enter number records: ");
	mas = new CandyBar[n];
	for (short i = 0; i < n; i++)
	{
		strcpy(mas[i].name, "Candy");
		mas[i].weight = i * 0.3454 - 0.1;
		mas[i].calories = i * 25 + 5;
	}
	for (short i = 0; i < n; i++)
		cout << "Name: " << mas[i].name << "\nWeight: " << mas[i].weight
		<< "\nCalories: " << mas[i].calories << endl << endl;
	delete mas;
	system("pause");
}

