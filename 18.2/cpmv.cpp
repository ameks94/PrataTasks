#include "cpmv.h"

Cpmv::Cpmv() : pi(new Info)
{
	std::cout << "Empty constructor \n";
	pi->qcode = "Hello";
	pi->zcode = "World";
}

Cpmv::Cpmv(std::string q, std::string z) : pi(new Info)
{
	std::cout << "Constructor with two strings \n";
	pi->qcode = q;
	pi->zcode = z;
}

Cpmv::Cpmv(const Cpmv & cp) : pi(new Info)
{
	std::cout << "Copy constructor \n";
	pi->qcode = cp.pi->qcode;
	pi->zcode = cp.pi->zcode;
}

Cpmv::Cpmv(Cpmv && mv) : pi(mv.pi)
{
	std::cout << "wrap constructor \n";
	mv.pi = nullptr;
}

Cpmv Cpmv::operator+(const Cpmv & obj) const
{
	std::cout << "Operator+.\n";
	return Cpmv((this->pi->qcode + obj.pi->qcode), (this->pi->zcode + obj.pi->zcode));
}

Cpmv & Cpmv::operator=(const Cpmv & cp)
{
	std::cout << "Operator= \n";
	if (this == &cp)
		return *this;
	pi->qcode = cp.pi->qcode;
	pi->zcode = cp.pi->zcode;
	return *this;
}

Cpmv & Cpmv::operator=(Cpmv && mv)
{
	std::cout << "Operator= wrap.\n";
	/*
	if (this == &mv)
		return *this;
	delete pi;*/
	pi = mv.pi;
	mv.pi = nullptr;
	return *this;
}

void Cpmv::Display() const
{
	std::cout << "Qcode: " << this->pi->qcode 
		<< "  Zcode: " << this->pi->zcode << std::endl;
}

Cpmv::~Cpmv(void)
{
	std::cout << "Destructor\n";
	delete pi;
}
