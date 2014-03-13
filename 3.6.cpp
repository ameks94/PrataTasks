#include "CheckInput.h"
const char m_s = 60;
const char h_m = 60;
const char d_h = 24;
const char y_d = 366;

void main ()
{
	double distance,liters;
	input(&distance, "Enter the distance in kilometers: ");
	input(&liters, "Number of spent fuel in liters: ");
	cout << "Your cost of gasoline per 100 kilometers: " << float(liters)*100/distance <<endl;
	system("pause");
}
