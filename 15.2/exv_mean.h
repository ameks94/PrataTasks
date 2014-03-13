#pragma once
#include <iostream>
#include <stdexcept>

class bad_hmean : public std::logic_error
{
public:
	bad_hmean(char const *msg): logic_error(msg) {}

};

class bad_gmean : public std::logic_error
{
public:
	bad_gmean(char const *msg): logic_error(msg) {}
};