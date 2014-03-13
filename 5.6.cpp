#include "CheckInput.h"
#include <array>
const short year = 3;
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
	int volume[year][12];
	long summ_all = 0;
	long summ[year] = {};
	for (short y = 0; y < year; y++)
	{
		system("cls");
		cout << y + 1 << " year:" << endl;
		for (short m = 0; m < 12; m++)
		{
			input(&volume[y][m], month[m]);
			summ_all += volume[y][m];
			summ[y] += volume[y][m];
		}
		cout << "The total amount for " << y + 1 << " year: " 
			<< summ[y] << endl;
		getch();
	}
	cout << "Total sales for the year: " << summ_all <<endl;
	system("pause");
}

