#include "CheckInput.h"
struct CandyBar
{
	char SweetName[20];
	double weight;
	int calories;
};

void SetCandy(CandyBar *candybar, char *name, double weight, int calories)
{
	strcpy(candybar->SweetName,name);
	candybar->weight = weight;
	candybar->calories = calories;
}

void ShowCandy(const CandyBar *candybar)
{
	cout << "Name: " << candybar->SweetName << endl;
	cout << "Weight: " << candybar->weight << endl;
	cout << "Calories: " << candybar->calories << endl;
}

void main()
{
	CandyBar candybar;
	SetCandy(&candybar,"Millennium Munch",2.85,350);
	ShowCandy(&candybar);
	system("pause");
}