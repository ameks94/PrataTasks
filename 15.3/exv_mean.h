#pragma once
#include <iostream>
#include <stdexcept>
class BASE_mean : public std::logic_error
{
	double er1, er2;
public:
	BASE_mean(char const *msg, double op1, double op2)
		: logic_error(msg), er1(op1), er2(op2) {}
	void info() const;
};

class bad_hmean : public BASE_mean
{
public:
	bad_hmean(char const *msg, double op1, double op2): BASE_mean(msg,op1,op2) {}

};

class bad_gmean : public BASE_mean
{
public:
	bad_gmean(char const *msg, double op1, double op2): BASE_mean(msg,op1,op2) {}
};

inline void BASE_mean::info() const
{
	std::cout << what() << "\nBad data: " << er1 << " and " << er2 << "\n";
}