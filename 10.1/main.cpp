#include "bank.h"

void main ()
{
	Bank *bank = new Bank("Alex","MyAccount2",9860);
	cout << "Your information: " << endl;
	bank->ShowInfo();
	float summ;
	input(&summ,"How much money would you like to put to your account: ");
	bank->AddBalance(summ);
	cout << "Your changed information: " << endl;
	bank->ShowInfo();
	input(&summ,"How much money would you like to withdraw from your account: ");
	bank->SubBalance(summ);
	cout << "Your changed information: " << endl;
	bank->ShowInfo();
	system("pause");
}