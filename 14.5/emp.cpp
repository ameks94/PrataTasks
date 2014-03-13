#include <iostream>
#include "emp.h"
//abstr_emp
abstr_emp::abstr_emp() {};
abstr_emp::abstr_emp(const std::string & fn, const std::string & ln, const std::string & j)
	: fname(fn), lname(ln), job(j)
{}

void abstr_emp::ShowAll() const
{
	std::cout << "\nName: " << lname << ", " << fname << "\nOccupation: " << job << '\n';
	std::cout.flush();
}

void abstr_emp::SetAll()
{
	using std::cin;  using std::cout;
	cout << "Enter first name please: ";
	cin >> fname;
	cout << "Enter last name please: ";
	cin >> lname;
	cout << "Enter occupation: ";
	cin >> job;
}

std::ostream &operator<<(std::ostream &os, const abstr_emp &e)
{
	os << e.fname << ' ' << e.lname;
	return os;
}

//employee
employee::employee() {}
employee::employee(const std::string & fn, const std::string & ln, const std::string & j)
	: abstr_emp(fn, ln, j)
{}

void employee::ShowAll() const
{
	abstr_emp::ShowAll();
}

void employee::SetAll()
{
	abstr_emp::SetAll();
}

//manager
manager::manager() {}

manager::manager(const std::string & fn, const std::string & ln, const std::string & j, int ico)
	: abstr_emp(fn, ln, j), inchargeof(ico)
{}

manager::manager(const abstr_emp & e, int ico)
	: abstr_emp(e), inchargeof(ico)
{}

void manager::ShowAll() const
{
	abstr_emp::ShowAll();
	std::cout << "Is in charge of " << inchargeof << " employees.\n"; std::cout.flush();
}

void manager::SetAll()
{
	abstr_emp::SetAll();
	std::cout << "Enter number of subordinates: ";
	std::cin >> inchargeof;
}

//fink
fink::fink() {}
fink::fink(const std::string & fn, const std::string & ln, const std::string & j, const std::string & rpo)
	: abstr_emp(fn, ln, j), reportsto(rpo)
{}

fink::fink(const abstr_emp & e, const std::string & rpo)
	: abstr_emp(e), reportsto(rpo)
{}

void fink::ShowAll() const
{
	abstr_emp::ShowAll();
	std::cout << "Reports to " << reportsto << ".\n"; std::cout.flush();
}

void fink::SetAll()
{
	abstr_emp::SetAll();
	std::cout << "Enter to whom fink reports to: ";
	getline(std::cin, reportsto); std::cin.get();
}

//highfink
highfink::highfink() {}

highfink::highfink(const std::string & fn, const std::string & ln, const std::string & j, const std::string & rpo, int ico)
	: abstr_emp(fn, ln, j), manager(manager(), ico), fink(fink(), rpo)
{}

highfink::highfink(const abstr_emp & e, const std::string & rpo, int ico)
	: abstr_emp(e), manager(e, ico), fink(e, rpo)
{}

highfink::highfink(const fink & f, int ico)
	: abstr_emp(f), fink(f), manager(f, ico)
{}

highfink::highfink(const manager & m, const std::string & rpo)
	: abstr_emp(m), manager(m), fink(m, rpo)
{}

void highfink::ShowAll() const
{
	abstr_emp::ShowAll();
	std::cout << "Is in charge of " << manager::InChargeOf() << " employees.\n"
		<< "Reports to " << fink::ReportsTo() << ".\n"; std::cout.flush();
}

void highfink::SetAll()
{
	abstr_emp::SetAll();
	std::cout << "Enter number of subordinates: ";
	std::cin >> manager::InChargeOf();
	std::cout << "Enter to whom fink reports to: ";
	std::cin.get(); getline(std::cin, fink::ReportsTo());
}