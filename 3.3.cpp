#include "CheckInput.h"
const char m_s = 60;
const char d_m = 60;

void main ()
{
	double degrees,minutes,seconds;
	input(&degrees, "Enter latitude in degrees, minutes, and seconds: \nFirst, enter the degrees: ");
	input(&minutes, "Next, enter the minutes of arc:  ");
	input(&seconds, "Finally, enter the seconds of arc: ");
	cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = ";
	degrees += (minutes += seconds/m_s) / d_m;
	cout << degrees << " degrees" << endl;
	system("pause");
}

