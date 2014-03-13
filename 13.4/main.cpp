#include "port.h"
#include "VintagePort.h"
#include <string>
using namespace std;
int main()
{
	Port p1, p2("777Nice", "Red", 3), p3(p2);
	VintagePort vp1, vp2("77Nice", 2, "Good", 1995), vp3(vp2);

	cout << "Creating bunch of objects:\n";
	p1.Show(); p2.Show(); p3.Show();
	cout << '\n';
	vp1.Show(); vp2.Show(); vp3.Show();

	cout << "\nAdding and taking bottles: ";
	p1 += 4; p2 -= 1; p3 += 7;
	vp1 += 1; vp2 -= 3; vp3 += 10;
	cout << '\n' << p1 << '\n' << p2 << '\n' << p3 << "\n\n"
		<< vp1 << '\n' << vp2 << '\n' << vp3 << '\n';

	cout << "\nAssignments: ";
	p1 = p2 = p3;
	vp1 = vp2 = vp3;
	cout << '\n' << p1 << '\n' << p2 << '\n' << p3 << "\n\n"
		<< vp1 << '\n' << vp2 << '\n' << vp3 << '\n';

	system("pause");
	return 0;
}