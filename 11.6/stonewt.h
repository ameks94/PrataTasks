// stonewt.h -- definition for the Stonewt class
#ifndef STONEWT_H_
#define STONEWT_H_
#include "CheckInput.h"

enum Form {FStn, FLbs};

class Stonewt
{
private:
	mutable Form flag_;
    enum {Lbs_per_stn = 14};      // pounds per stone
    int stone;                    // whole stones
    double pds_left;              // fractional pounds
    double pounds;                // entire weight in pounds
public:
    Stonewt(double lbs);          // constructor for double pounds
    Stonewt(int stn, double lbs); // constructor for stone, lbs
    Stonewt();                    // default constructor
    ~Stonewt();
	
	const Stonewt & setForm(Form flag) const {flag_ = flag; return *this;}

	friend std::ostream &operator<<(std::ostream &, const Stonewt &);

	friend Stonewt operator+(const Stonewt &, const Stonewt &);
    friend Stonewt operator-(const Stonewt &, const Stonewt &);
    friend Stonewt operator*(const Stonewt &, double);
    friend Stonewt operator*(double, const Stonewt &);

	friend bool operator<(const Stonewt &a, const Stonewt &b) {return a.pounds < b.pounds;}
	friend bool operator>(const Stonewt &a, const Stonewt &b) {return b < a;}
	friend bool operator<=(const Stonewt &a, const Stonewt &b) {return !(a > b);}
	friend bool operator>=(const Stonewt &a, const Stonewt &b) {return !(a < b);}
	friend bool operator==(const Stonewt &a, const Stonewt &b) {return (!(a > b) && !(a < b));}
	friend bool operator!=(const Stonewt &a, const Stonewt &b) {return !(a==b);}
}; 

#endif
