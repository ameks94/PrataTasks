#include <iostream>
#include <string>
#include <conio.h>
#include "baseDMA.h"
using namespace std;
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

void input (string *str, char *mesg = " ")
{
	if (mesg != " ")
		cout << mesg;
	getline(cin,*str);
}

const int size = 3;
int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	using std::string;

	DMA * arr[size];
	string label, color, style;
	int rating;
	char key;

	for (int i = 0; i < size; i++)
	{
		input(&label,"Enter label: ");
		input(&rating,"Enter rating: ");
		do
		{
			cout << "1 - DMA(base class)\n2 - lacksDMA\n3 - hasDMA\n";
			key = getch();
		}
		while(key != '1' && key != '2' && key != '3');
		switch (key)
		{
		case '1': arr[i] = new baseDMA(label.c_str(), rating); break;
		case '2': 
			{
				input(&color,"Enter color: ");
				arr[i] = new lacksDMA(color.c_str(), label.c_str(), rating);
				break;
			}
		case '3': 
			{
				input(&style,"Enter style: ");
				arr[i] = new hasDMA(style.c_str(), label.c_str(), rating);
				break;
			}
		}
	}
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		arr[i]->View();
		cout << endl;
		delete arr[i]; // free memory
	}

	system("pause");
	return 0;
}