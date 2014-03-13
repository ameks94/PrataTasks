#include <iostream>
#include <array>
#include <algorithm>
#include <string>
using std::cout;
using std::cin;
using std::array;
using std::string;

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

void main()
{
	int n;
	input(&n, "Enter string number: ");
	string a(n,'.');

	for (int i = a.size() - 1; i >= 0; i--)
	{
		a[i] = '*';
		cout << a << std::endl;
	}

	system("pause");
}