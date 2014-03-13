#include <iostream>
#include <string>
#include <cctype>
using std::string;
using std::cout;
using std::cin;
void input (string & str, const char *mesg = " ")
{
	if (mesg != " ")
		cout << mesg;
	getline(cin,str);
}
string LinePreparation(const string & st1)
{
	int size = st1.size();
	string st2;
	int size_st2 = 0;
	for (int i = 0; i < size; i++)
		if (isalpha(st1[i]))
			st2 += tolower(st1[i]);
	return st2;
}
bool Palindrom(const string & str1)
{
	string str2 = LinePreparation(str1);
	bool isPal = true;
	int size = str2.size();
	for (int i = 0; i < size; i++)
	{
		if (str2[i] != str2[size - 1 - i])
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
