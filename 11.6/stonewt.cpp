// stonewt.cpp -- Stonewt methods
using namespace std;
#include "stonewt.h"

// construct Stonewt object from double value
Stonewt::Stonewt(double lbs)
{
	flag_ = Form::FLbs;
    stone = int (lbs) / Lbs_per_stn;    // integer division
    pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
}

// construct Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs)
{
	flag_ = Form::FStn;
    stone = stn;
    pds_left = lbs;
    pounds =  stn * Lbs_per_stn +lbs;
}

Stonewt::Stonewt()          // default constructor, wt = 0
{
	flag_ = Form::FLbs;
    stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt()         // destructor
{
}


std::ostream & operator<<(std::ostream & os, const Stonewt & c)
{
	if(c.flag_ == Form::FLbs)
		os << c.pounds << " pounds\n";
	else
		os << c.stone << " stone, " << int(c.pds_left) << " pounds\n";
	return os;
}

Stonewt operator+(const Stonewt & st1, const Stonewt & st2)
{
	return Stonewt(st1.pounds + st2.pounds);
}

Stonewt operator-(const Stonewt & st1, const Stonewt & st2)
{
	return Stonewt(st1.pounds > st2.pounds ? st1.pounds - st2.pounds : 0.0);
}

Stonewt operator*(const Stonewt & a, double b)
{
	return Stonewt(a.pounds * b);
}

Stonewt operator*(double a, const Stonewt & b)
{
	return b * a;
}