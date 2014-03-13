#include "CheckInput.h"
void main ()
{
	FILE *f;
	f = fopen("1.txt","r");
	char ch;
	int n=0;

	while (fscanf(f,"%c",&ch) != EOF)
		n++;
	cout << "Number of symbols: " << n << endl;
	fclose(f);
	system("pause");
}
