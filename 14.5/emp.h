#pragma once
#include <iostream>
#include <string>
class abstr_emp
{
private:
	std::string fname; // abstr_emp's first name
	std::string lname; // abstr_emp's last name
	std::string job;

public:
	abstr_emp();
	abstr_emp(const std::string & fn, const std::string & ln, const std::string & j);

	virtual void ShowAll() const; // labels and shows all data
	virtual void SetAll(); // prompts user for values
	virtual void writeall(std::ofstream &) const;
	friend std::ostream &operator<<(std::ostream & os, const abstr_emp & e); // just displays first and last name
	virtual ~abstr_emp() = 0 {} // virtual base class
};

class employee : public abstr_emp
{
public:
	employee();
	employee(const std::string & fn, const std::string & ln, const std::string & j);

	virtual void ShowAll() const;
	virtual void SetAll();
	virtual void writeall(std::ofstream &) const;
};

class manager: virtual public abstr_emp
{
private:
	int inchargeof; // number of abstr_emps managed

protected:
	int InChargeOf() const { return inchargeof; } // output
	int &InChargeOf(){ return inchargeof; } // input

public:
	manager();
	manager(const std::string & fn, const std::string & ln, const std::string & j, int ico = 0);
	manager(const abstr_emp & e, int ico);

	virtual void ShowAll() const;
	virtual void SetAll();
	virtual void writeall(std::ofstream &) const;

};

class fink: virtual public abstr_emp
{
private:
	std::string reportsto; 

protected:
	const std::string ReportsTo() const { return reportsto; }
	std::string & ReportsTo(){ return reportsto; }

public:
	fink();
	fink(const std::string & fn, const std::string & ln, const std::string & j, const std::string & rpo);
	fink(const abstr_emp & e, const std::string & rpo);

	virtual void ShowAll() const;
	virtual void SetAll();
	virtual void writeall(std::ofstream &) const;
};

class highfink: public manager, public fink // management fink
{
public:
	highfink();
	highfink(const std::string & fn, const std::string & ln, const std::string & j, const std::string & rpo, int ico);
	highfink(const abstr_emp & e, const std::string & rpo, int ico);
	highfink(const fink & f, int ico);
	highfink(const manager & m, const std::string & rpo);

	virtual void ShowAll() const;
	virtual void SetAll();
	virtual void writeall(std::ofstream &) const;
};