#include "CheckInput.h"
const char m_s = 60;
const char h_m = 60;
const char d_h = 24;
const char y_d = 366;

void main ()
{
	double liters; 
	input(&liters, "Amount of spent fuel per 100 km in liters: ");
	cout << "U.S. style miles per gallon: " 
	<< 1/(liters/(3.875*62.14)) << endl;
	system("pause");
}