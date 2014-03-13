#include "plorg.h"

int main()
{
	cout << "New Plorg: " << endl;
	Plorg plorg;
	plorg.showPlorg();
	cout << endl;

	plorg.changeCI(288);
	cout << "Changed Plorg: " << endl;
	plorg.showPlorg();
	cout << endl;
	system("pause");
}
