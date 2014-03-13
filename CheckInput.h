#ifndef CHECKINPUT_H
#define CHECKINPUT_H

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;
using std::endl;


inline void input (string *str, char *mesg = " ")
{
	if (mesg != " ")
		cout << mesg;
	getline(cin,*str);
}

template <typename AnyType>
void input (AnyType *a, char *mesg = " ")
{
	if (mesg != " ")
		cout << mesg;
	cin >> *a;
	while (cin.get()!='\n')
	{
		cin.clear();           
		cin.sync();            
		cout << "Value is incorrect. Try again:\n";
		cin >> *a;
	}
}

inline void input (char *str, int size, char *mesg = " ")
{
	if (mesg != " ")
		cout << mesg;
	cin.getline(str,size);
	cin.clear();
	cin.sync();
}

#endif