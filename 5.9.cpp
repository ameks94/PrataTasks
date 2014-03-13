#include "CheckInput.h"
void main ()
{
	int n=0;
	string str;
	setlocale(LC_CTYPE, "Russian");

	cout << "Вводите слова (для завершения введите слово done):" << endl;
	do
	{
		n++;
		input(&str);
	}
	while (str != "done");
	cout << "Вы ввели " << n - 1 << " слов. " <<endl;
	system("pause");
}

