#include "stonewt.h"
using namespace std;

int main ()
{
	Stonewt w1(32.45), w2(44.3);
	cout << "Displaying two weights in pounds: \n" << w1.setForm(Form::FLbs)
		<< w2.setForm(Form::FLbs);
	cout << "\nAnd here they are again in stone and pounds: \n" << w1.setForm(Form::FStn)
		<< w2.setForm(Form::FStn);

	cout << "\nAnd here is the sum: \n" << (w1 + w2).setForm(Form::FStn);

	cout << "\nAnd here are weights multiplied by 10: \n" << (10*w1).setForm(Form::FStn) << (10*w2).setForm(Form::FStn);

	cout << "\nAnd there are subtractions: \n" << (w1 - w2).setForm(Form::FStn) << (w2 - w1).setForm(Form::FStn);
	system("pause");
	return 0;
}