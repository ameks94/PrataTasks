#include "CheckInput.h"
const char m_s = 60;
const char h_m = 60;
const char d_h = 24;

void main ()
{
	long long seconds;
	int answer[4];
	input(&seconds, "Enter the number of seconds: ");

	cout << seconds <<" seconds = ";
	answer[0] = seconds % int(m_s);
	seconds = (seconds -= answer[0]) / int(m_s); // convert to minutes

	answer[1] = seconds % int(m_s);
	seconds = (seconds -= answer[1]) / int(m_s); // convert to hours

	answer[2] = seconds % int(d_h);
	seconds = (seconds -= answer[2]) / int(d_h); // convert to days

	answer[3] = seconds % 366;

	cout << answer[3] << " days, " << answer[2] << " hours, "
		<< answer[1] << " minutes, " << answer[0] << " seconds" << endl;
	system("pause");
}

