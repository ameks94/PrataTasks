#include "golf.h"

void main()
{
	golf ann;
	setgolf(ann, "Ann Birdfree", 24);

	showgolf(ann);
	cout << endl;

	handicap(ann,12);
	cout << "After changing: " << endl;
	showgolf(ann);

	golf andy;
	while(setgolf(andy))
	{
		cout << "Your record:" << endl;
		showgolf(andy);
		cout << endl;
	}
	system("pause");
}