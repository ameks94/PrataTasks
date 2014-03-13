#include "CheckInput.h"
#include <array>
const int ArSize = 101;

void main ()
{
	int num;
	long sum=0;
	do
	{
		input(&num,"Enter number: ");
		cout << (sum += num) << endl;
	}
	while (num);

	system("pause");
}

