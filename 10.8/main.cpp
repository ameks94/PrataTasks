#include "list.h"

void ShowDouble(TList & item)
{
	cout << item << " ";
}

void Mul(TList & item)
{
	item *= 2;
}

int main()
{
	List list;
	cout << "Empty list was created." << endl;
	list.visit(ShowDouble);
	cout << endl;
	cout << "List is empty? " << list.IsEmpty() << endl;
	cout << "List is full? " << list.IsFull() << endl;

	cout << "After adding: " << endl;
	for(int i = 0; list.add(i); i++) {}
	list.visit(ShowDouble);
	cout << endl;
	cout << "List is empty? " << list.IsEmpty() << endl;
	cout << "List is full? " << list.IsFull() << endl;

	cout << "After multiplying: " << endl;
	list.visit(Mul);
	list.visit(ShowDouble);
	cout << endl;
	cout << "List is empty? " << list.IsEmpty() << endl;
	cout << "List is full? " << list.IsFull() << endl;
	system("pause");
}
