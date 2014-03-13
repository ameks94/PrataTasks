#include "CheckInput.h"
void main ()
{
	int n=0;
	char *mas = new char[20];
	setlocale(LC_CTYPE, "Russian");

	cout << "Вводите слова (для завершения введите слово done):" << endl;
	do
	{
		n++;
		input(mas,20);
	}
	while (strcmp(mas,"done"));
	cout << "Вы ввели " << n - 1 << " слов. " <<endl;
	delete[] mas;
	system("pause");
}

