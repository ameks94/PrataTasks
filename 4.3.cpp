#include "CheckInput.h"
struct
{
	char first[20];
	char second[20];
} reg;

void main ()
{
	int size = 20;
	char str[42];
	input(reg.first, size, "Enter your first name: ? ");
	input(reg.second, size, "Enter your last name: ? ");
	strcpy(str,reg.second);
	strcat(str,", ");
	strcat(str,reg.first);
	cout << "Here's the information in a single string: " << str << endl;
	system("pause");
}

