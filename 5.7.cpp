#include "CheckInput.h"
struct Car 
{
	string manufacturer[20];
	int year;
};
void main ()
{
	setlocale(LC_CTYPE, "Russian");
	Car *car;
	short n;

	input(&n, "������� ����������� ����������� � �������? ");
	car = new Car[n];

	for (short i = 0; i < n; i++)
	{
		cout << "���������� �" << i+1 << ":" << endl;
		cout << "������� �������������: ";
		input(car[i].manufacturer);
		cout << "������� ��� �������: ";
		input(&car[i].year);
	}

	cout << "��� ���� ���������: " << endl;
	for (short i = 0; i < n; i++)
	{
		setlocale(LC_ALL,".866");
		cout << car[i].year << " " << *car[i].manufacturer << endl;
	}
	delete[] car;
	system("pause");
}

