#include "CheckInput.h"
void main ()
{
	int n=0;
	char *mas = new char[20];
	setlocale(LC_CTYPE, "Russian");

	cout << "������� ����� (��� ���������� ������� ����� done):" << endl;
	do
	{
		n++;
		input(mas,20);
	}
	while (strcmp(mas,"done"));
	cout << "�� ����� " << n - 1 << " ����. " <<endl;
	delete[] mas;
	system("pause");
}

