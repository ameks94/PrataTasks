#include <iostream>
#include <list>
#include <string>
using std::string;
using std::cin;
using std::cout;
template <class T>
int reduce(T ar[], int n);

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

int main()
{
	const int size = 5;
	long ar[size];
	for (int i = 0; i < size; i++)
	{
		cout << "Enter " << i + 1 << " number: ";
		input(&ar[i]);
	}
	cout << "After processing array has " << reduce(ar,size) << " elements.\n";

	string ar2[size];
	cout << "\nAnd now enter 5 strings please:\n ";
	for (int i = 0; i < size; i++)
	{
		cout << "Enter " << i + 1 << " string: ";
		input(&ar2[i]);
	}
	cout << "After processing array has " << reduce(ar2,size) << " strings.\n";

	system("pause");
	return 0; 
}

template <class T>
int reduce(T ar[], int n)
{
	std::list<T> s(ar, ar + n);
	s.sort();
	s.unique();
	cout << "Array, after processing:\n";
	std::list<T>::iterator b = s.begin();
	std::list<T>::iterator e = s.end();
	while (b != e)
	{
		cout << *b << " ";
		b++;
	}
	cout << "\n";
	return s.size();
}