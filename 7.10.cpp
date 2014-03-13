#include "CheckInput.h"
double add(double x, double y)
{
	cout << "Summ: ";
	return x + y;
}

double sub(double x, double y)
{
	cout << "Substraction: ";
	return x - y;
}

double mull(double x, double y)
{
	cout << "Multiply: ";
	return x * y;
}

double calculate(double x, double y, double (*func)(double,double))
{
	return func(x,y);
}
void main()
{
	double (*func[3])(double,double);
	func[0] = add;
	func[1] = sub;
	func[2] = mull;
	double x,y;
	cout << "Enter x and y (q - Exit): ";
	while(cin >> x >> y)
	{
		for (short i = 0; i < 3; i++)
		{
			cout << calculate(x,y,func[i])
				<< endl;
		}
		cout << "Enter x and y (q - Exit): ";
	}
	system("pause");
}