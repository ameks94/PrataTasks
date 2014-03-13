#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
void input (string & str, char *mesg = " ")
{
	if (mesg != " ")
		cout << mesg;
	getline(cin,str);
}
bool Palindrom(string & str)
{
	bool isPal = true;
	int size = str.size();
	for (int i = 0; i < size; i++)
	{
		if (str[i] != str[size - 1 - i])
			isPal = false;
	}
	return isPal;
}
int main()
{
	string str;
	input(str,"Enter string: ");
	if (Palindrom(str))
		cout << "Palindrom" << std::endl;
	else
		cout << "Is not Palindrom" << std::endl;
	system("pause");
	return 0;
}
