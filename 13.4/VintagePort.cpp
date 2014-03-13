#include "VintagePort.h"

VintagePort::VintagePort()
	: Port(), nickname(new char[5]), year(0)
{
	strcpy(nickname, "none");
}

VintagePort::VintagePort(const char * br, int b, const char * nn, int y) : 
	Port(br,"vintage",b), nickname(new char[strlen(nn) + 1]), year(y)
{
	strcpy(nickname,nn);
}

VintagePort::VintagePort(const VintagePort & vp)
	: Port(vp), nickname(new char[strlen(vp.nickname) + 1]), year(vp.year)
{
	strcpy(nickname, vp.nickname);
}

VintagePort & VintagePort::operator=(const VintagePort & vp)
{
	if (this == & vp)
		return *this;

	Port::operator=(vp);
	delete [] nickname;
	nickname = new char[strlen(vp.nickname) + 1];

	strcpy(nickname,vp.nickname);
	year = vp.year;
	return *this;
}

void VintagePort::Show() const
{
	Port::Show();
	std::cout << "NickName: " << nickname << std::endl 
		<< "Year: " << year << std::endl;
}

std::ostream & operator<<(std::ostream & out, const VintagePort & p)
{
	out << (Port &) p << ", " << p.nickname << ", " << p.year;
	return out;
}
