#ifndef BANK_H
#define BANK_H
#include "CheckInput.h"

class Bank
{
	string m_name;
	string m_account;
	float m_balance;
public:
	Bank(string m_name = "", string m_account = "", float m_bal = 0.0);
	void ShowInfo();
	void AddBalance(float summ);
	void SubBalance(float summ);
};

#endif