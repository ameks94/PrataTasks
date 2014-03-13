#include "Person.h"

void main ()
{
	Person one;
	Person two("Smythecraft");
	Person three("Dimwiddy", "Sam");

	cout << "First object: " << endl;
	cout << "Name Surname: " << endl;
	one.Show();
	cout << "Surname, name" << endl;
	one.FormalShow();
	cout << endl;

	cout << "Second object: " << endl;
	cout << "Name Surname: " << endl;
	two.Show();
	cout << "Surname, name" << endl;
	two.FormalShow();
	cout << endl;

	cout << "Third object: " << endl;
	cout << "Name Surname: " << endl;
	three.Show();
	cout << "Surname, name" << endl;
	three.FormalShow();
	cout << endl;
	system("pause");
}