#include <iostream>
#include <array>
#include <algorithm>
using std::cout;
using std::cin;
using std::array;
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
	array<double,3> arr;
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter " << i + 1 << " value: ";
		input(&arr[i]);
	}
	double summ = 0;
	cout << "Your elements: ";
	std::for_each(arr.begin(), arr.end(), [&summ](double i){ cout << i << " "; summ += i;});
	cout << "\nYour summ: " << summ << std::endl;
	std::system("pause");
}