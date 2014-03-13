#include "move.h"

int main()
{
	cout << "Move1: " << endl;
	Move move1(10,2);
	move1.showmove();
	cout << endl;

	cout << "Move2: " << endl;
	Move move2(20,35);
	move2.showmove();
	cout << endl;

	cout << "Move1 + Move2: " << endl;
	move2 = move1.add(move2);
	move2.showmove();
	system("pause");
}
