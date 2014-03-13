#include <iostream>
#include "emp.h"
using namespace std;

int main(void)
{
	employee em("Alex", "Martine", "mathematic");
	cout << em << endl;
	em.ShowAll();

	manager ma("Olga", "Rusina", "doctor", 3);
	cout << ma << endl;
	ma.ShowAll();

	fink fi("David", "Oggs", "Oiler", "Jone");
	cout << fi << endl;
	fi.ShowAll();

	highfink hf(ma, "Merly");
	hf.ShowAll();

	cout << "Press a key for next phase:\n";
	cin.get();
	cin.clear();
	cin.sync();

	highfink hf2;
	hf2.SetAll();

	cout << "Using an abstr_emp * pointer:\n";

	abstr_emp * tri[4] = {&em, &fi, &hf, &hf2};
	for (int i = 0; i < 4; i++)
		tri[i]->ShowAll();

	system("pause");
	return 0;
}