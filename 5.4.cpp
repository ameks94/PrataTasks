#include "CheckInput.h"
#include <array>
const short proc_daphna = 10;
const short proc_kleo = 5;
void main ()
{
	float bal_daphna=100;
	float profit_daphna = bal_daphna*0.1;
	float bal_kleo=100;
	int year=1;
	do
	{
		bal_daphna += profit_daphna;
		bal_kleo += bal_kleo*0.05; 
		cout << year << " year, Daphna balance: " 
			<< bal_daphna <<endl;
		cout << year << " year, Kleo balance: " 
			<< bal_kleo << endl << endl;
		year++;
	}
	while (bal_kleo <= bal_daphna);

	system("pause");
}

