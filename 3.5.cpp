#include "CheckInput.h"
const char m_s = 60;
const char h_m = 60;
const char d_h = 24;
const char y_d = 366;

void main ()
{
	long long world, usa;
	input(&world, "Enter the world's population: ");
	input(&usa, "Enter the population of the Usa: ");
	cout << "The population of the Usa is " << float(usa)*100/world 
	<< "% of the world population" << endl;
	system("pause");
}



