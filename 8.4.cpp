#include "CheckInput.h"
struct stringy {
	char* str;
	int ct;
};
void set(stringy* beany, char const* testing)
{
	beany->ct = strlen(testing);
	beany->str = new char[beany->ct + 1];
	strcpy(beany->str,testing);
}

void show(stringy* beany, int count = 1)
{
	for (int i = 0; i < count; i++)
		cout << "Your string: " << beany->str << endl;
}

void show(char* testing, int count = 1)
{
	for (short i = 0; i < count; i++)
		cout << "Your string: " << testing << endl;
}

void main()
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";
	set(&beany,testing);
	show(&beany);
	show(&beany,2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing,3);
	show("Done!");
	system("pause");
}
