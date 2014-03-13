// usestok2.cpp -- using the Stock class
// compile with stock20.cpp
#include <iostream>
#include "stack.h"

int main()
{
	using std::cout;
	using std::endl;
	cout << "Creating stack1 of 5 elements: \n";
	Stack st1(5);
	cout << "Steck is empty?: " << st1.isempty() << endl;
	cout << "Steck is full?: " << st1.isfull() << endl;
	for (int i = 0 ; i < 5; i++)
		st1.push(i+1);
	cout << "After pushing 5 elements(1,2,3,4,5): \n";
	cout << "Steck is empty?: " << st1.isempty() << endl;
	cout << "Steck is full?: " << st1.isfull() << endl;

	unsigned long a;
	st1.pop(a);
	cout << "After poping, the latest element: " << a << endl;

	cout << "Copy constructor testing. We created stack2:\n";
	Stack st2(st1);
	cout << "Steck is empty?: " << st2.isempty() << endl;
	cout << "Steck is full?: " << st2.isfull() << endl;
	st2.pop(a);
	cout << "After poping, the latest element: " << a << endl;

	Stack st3;
	cout << "After asignment stack3 stack2: \n";
	st3 = st2;
	cout << "Steck is empty?: " << st2.isempty() << endl;
	cout << "Steck is full?: " << st2.isfull() << endl;
	st2.pop(a);
	cout << "After poping, the latest element: " << a << endl;
	system("pause");
    return 0; 
}
