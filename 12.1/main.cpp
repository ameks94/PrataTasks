#include "cow.h"
int main ()
{
	cout << "My first cow: " << endl;
	Cow mc1("BigCow","C++",45);
	mc1.ShowCow();
	
	cout << "\nMy second cow: \n";
	Cow mc2;
	mc2.ShowCow();

	cout << "\nThis is a twin brother of the first cow:\n";
	Cow mc3;
	mc3 = mc1;
	mc3.ShowCow();

	cout << "\nThis is a twin brother of the second cow:\n";
	Cow mc4(mc2);
	mc4.ShowCow();
	system("pause");
	return 0;
}