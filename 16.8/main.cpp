#include <iostream>
#include <string>
#include <set>
#include <conio.h>
using std::string;
using std::cin;
using std::cout;

void input (string *str, char *mesg = " ")
{
	if (mesg != " ")
		cout << mesg;
	getline(cin,*str);
}

int main()
{
	std::set<string> Mfriends, Pfriends, total;
	char Mat;
	string temp;
	bool exit;
	do
	{
		exit = false;
		system("cls");
		cout << "1 - Mats friend.\n2 - Pats friend.\nq - Show friends and quit.\n";
		Mat = getch();
		switch ( Mat )
		{
		case '1': 
			{
				input( &temp, "Enter name: ");
				Mfriends.insert(temp);
				break;
			}
		case '2':
			{
				input( &temp, "Enter name: ");
				Pfriends.insert(temp);
				break;
			}
		default: 
			{
				exit = true;
				break;
			}
		}
	}
	while(!exit);
	total.insert(Mfriends.begin(), Mfriends.end());
	total.insert(Pfriends.begin(), Pfriends.end());
	cout << "Our guests: ";
	for( std::set<string>::iterator i = total.begin(); i != total.end(); i++)
		cout << *i << " ";
	cout << "\n";
	system("pause");
	return 0;
}
