#include "CheckInput.h"
void main ()
{
	int n=0;
	string str;
	setlocale(LC_CTYPE, "Russian");

	cout << "������� ����� (��� ���������� ������� ����� done):" << endl;
	do
	{
		n++;
		input(&str);
	}
	while (str != "done");
	cout << "�� ����� " << n - 1 << " ����. " <<endl;
	system("pause");
}

