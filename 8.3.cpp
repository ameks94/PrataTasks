#include "CheckInput.h"

void ToUp(string * str)
{
	for (short i = 0; i < str->size(); i++)
		(*str)[i] = toupper((*str)[i]);
}

void main()
{
	string str;
	cout << "Enter a string (q to quit): ";
	getline(cin,str);
	while(str != "q")
	{
		ToUp(&str);
		cout << str << endl;
		cout << "Enter a string (q to quit): ";
		getline(cin,str);
	}
	cout << "Good luck" << endl;
	system("pause");
}