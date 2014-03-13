#include <iostream>
#include "tv.h"
using namespace std;

int main()
{
	Tv tv1;

	cout << "Configuration 1 TV: " << endl;
	tv1.settings();
	tv1.onoff();
	tv1.chanup();
	cout << "After changing configuration: " << endl;
	tv1.settings();

	Remote rem;
	rem.set_chan(tv1,25);
	rem.voldown(tv1);
	cout << "TV 1 settings after using remote: \n";
	tv1.settings();

	Tv tv2(Tv::Off);
	tv2.onoff();
	tv2.set_mode();
	rem.set_chan(tv2,28);
	cout << "TV 2 settings:\n";
	tv2.settings();
	
	cout << '\n';
	rem.ShowRemMode();
	cout << "\nUsing TV 1 to alter mode.\n";
	tv1.set_RemMode(rem);
	rem.ShowRemMode();

	cout << "\nTrying to use TV 2 to alter mode.\n";
	tv2.set_RemMode(rem);
	rem.ShowRemMode();

	system("pause");
	return 0;
}