#include "CheckInput.h"
const short size = 40;
struct William
{
	char name[size];
	float diameter;
	float weight;
};

void main ()
{
	short n=0;
	William *pizza;
	input(&n, "Enter the number of companies: ");
	pizza = new William[n];
	for (short i = 0; i < n; i++)
	{
		cout << i + 1 << " company: " << endl;
		input(pizza[i].name,size, "Name: ");
		input(&pizza[i].diameter, "Pizza's diameter: ");
		input(&pizza[i].weight, "Pizza's weight: ");
		cout << endl;
	}

	cout << "Your records: \n";
	for (short i = 0; i < n; i++)
	{
		cout << i + 1 << " company: " << endl;
		cout << "Name: " << pizza[i].name << endl;
		cout << "Pizza's diameter: " << pizza[i].diameter << endl;
		cout << "Pizza's weight: " << pizza[i].weight << endl;
		cout << endl;
	}
	delete pizza;
	system("pause");
}

