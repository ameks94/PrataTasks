#include "CheckInput.h"
#include <array>

void main ()
{
	char **month = new char*[12];
	month[0] = "January: ";
	month[1] = "February: ";
	month[2] = "March: ";
	month[3] = "April: ";
	month[4] = "May: ";
	month[5] = "June: ";
	month[6] = "July: ";
	month[7] = "August: ";
	month[8] = "September: ";
	month[9] = "October: ";
	month[10] = "November: ";
	month[11] = "January: ";
	int volume[12];
	long summ = 0;
	for (short i = 0; i < 12; i++)
	{
		input(&volume[i], month[i]);
		summ += volume[i];
	}
	cout << "Total sales for the year: " << summ <<endl;
	system("pause");
}

