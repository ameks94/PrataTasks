#include "CheckInput.h"
long double probability(unsigned numbers, unsigned picks)
{
	long double answer = 1;
	for (short i = 0; i < picks; i++)
		answer = answer * (numbers-i) / (picks-i);
	return answer/27;
}
void main()
{
	int total,choices;
	char k;
	cout << "Enter the total number of choices on the game card and\n"
		<< "the number of picks allowed: ";
	while ((cin >> total >> choices) && choices <= total)
	{
		cout << "You have one chance in ";
		cout << probability(total,choices);
		cout << " of winning, considering meganomer.\n";
		cout << "Next two numbers (q to quit): ";
	}
	cout << "Good luck." << endl;
	system("pause");
}
