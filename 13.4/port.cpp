#include "port.h"

//PORT

Port::Port(const char * br, const char * st, int b ) : bottles(b), 
	brand(new char[strlen(br) + 1])
{
	strcpy(brand,br);
	strcpy(style,st);
	style[19] = '\0';
}

Port::Port(const Port & p) : bottles(p.bottles),
	brand(new char[strlen(p.brand) + 1])
{
	strcpy(brand,p.brand);
	strcpy(style,p.style);
	style[19] = '\0';
}

Port & Port::operator=(const Port & p)
{
	if (this == &p)
		return *this;
	delete [] brand;
	brand  = new char[strlen(p.brand) + 1];
	strcpy(brand,p.brand);
	strcpy(style,p.style);
	bottles = p.bottles;
	style[19] = '\0';
	return *this;
}

Port & Port::operator+=(int b)
{
	bottles += b;
	return *this;
}

Port & Port::operator-=(int b)
{
	if (bottles >= b)
		bottles -= b;
	return *this;
}

void Port::Show() const
{
	std::cout << "Brand: " << brand << std::endl;
	std::cout << "Kind: " << style << std::endl;
	std::cout << "Bottles: " << bottles << std::endl;
}

std::ostream & operator<<(std::ostream & out, const Port & p)
{
	out << p.brand << ", " << p.style << ", " << p.bottles;
	return out;
}
