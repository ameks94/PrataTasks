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

	input(&n, "Сколько автомобилей поместиться в каталог? ");
	car = new Car[n];

	for (short i = 0; i < n; i++)
	{
		cout << "Автомобиль №" << i+1 << ":" << endl;
		cout << "Введите производителя: ";
		input(car[i].manufacturer);
		cout << "Укажите год выпуска: ";
		input(&car[i].year);
	}

	cout << "Вот ваша коллекция: " << endl;
	for (short i = 0; i < n; i++)
	{
		setlocale(LC_ALL,".866");
		cout << car[i].year << " " << *car[i].manufacturer << endl;
	}
	delete[] car;
	system("pause");
}

