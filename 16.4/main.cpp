#include <iostream>
#include <list>
using std::string;
using std::cin;
using std::cout;
int reduce(long ar[], int n);

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

	system("pause");
	return 0; 
}

int reduce(long ar[], const int n)
{
	std::list<long> s(ar, ar + n);
	s.sort();
	s.unique();
	cout << "Array, after processing:\n";
	std::list<long>::iterator b = s.begin();
	std::list<long>::iterator e = s.end();
	while (b != e)
	{
		cout << *b << " ";
		b++;
	}
	cout << "\n";
	return s.size();
}