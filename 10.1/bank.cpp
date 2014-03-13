#include "bank.h"

Bank::Bank(string name, string account, float bal)
{
	m_name = name;
	m_account = account;
	m_balance = bal;
}

void Bank::AddBalance(float summ)
{
	m_balance += summ;
}

void Bank::SubBalance(float summ)
{
	m_balance -= summ;
}

void Bank::ShowInfo()
{
	std::cout << "Name: " << m_name << std::endl;
	std::cout << "Account: " << m_account << std::endl;
	std::cout << "Balance: " << m_balance << std::endl;
}
