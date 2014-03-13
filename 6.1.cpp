#include "CheckInput.h"
#include <ctype.h>
void main ()
{
	int  i=0;
	char* mas = new char[256];
	char symbol;
	cout << "Enter symbols: ";

	do
	{
		cin.get(symbol);
		if (isalpha(symbol))
		{
			if (isupper(symbol))
				mas[i++] = tolower(symbol);
			else
				mas[i++] = toupper(symbol);
		}
	}
	while (symbol != '@');

	mas[i] = '\0';
	cout << mas << endl;
	system("pause");
}

