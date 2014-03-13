#include "Stack.h"
#include "custumer.h"
#include <cctype>

int main()
{
	Item item;
	Stack stack;
	char key;
	double total_summ = 0;
	do
	{
		cout << "1 - To push." << endl << "2 - To pop." 
			<< endl <<  "3 - Quit" << endl;
		cin >> key;
		cin.clear();
		cin.sync();
		switch (key)
		{
		case '1': 
			{
				input(item.fullname,35,"Enter full name: ");
				input(&item.payment,"Enter payment: ");
				if (!stack.push(item))
					cout << "Stack if full" << endl;
				break;
			}
		case '2':
			{
				if(!stack.pop(&item))
					cout << "Stack is empty" << endl;
				else
					total_summ += item.payment;
				break;
			}
		}
	}
	while(key != '3');
	cout << "Total summ: " << total_summ << endl;
	cout << "Bye" << endl;
	system("pause");
}
