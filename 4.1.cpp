#include "CheckInput.h"
struct
{
	char first[20];
	char second[20];
	char grade;
	int age;
} reg;

void main ()
{
	int size = 20;
	input(reg.first, size, "What is your first name? ");
	input(reg.second, size, "What is your last name? ");
	cout << "What letter grade do you deserve? ";
	reg.grade = getchar();
	input(&reg.age, "What is your age? ");
	cout << endl << "Name: " << reg.second << ", " << reg.first << endl;
	cout << "Grade: " << char(reg.grade + 1) << endl << "Age: " << reg.age << endl;
	system("pause");
}

