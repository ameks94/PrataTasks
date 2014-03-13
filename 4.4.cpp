#include "CheckInput.h"
struct
{
	string first;
	string second;
} reg;

void main ()
{
	 input(&reg.first, "Enter your first name: ");
	 input(&reg.second, "Enter your last name:  ");
	 reg.second += ", ";
	 reg.second += reg.first;
	 cout << "Here's the information in a single string: " << reg.second << endl;
	system("pause");
}

