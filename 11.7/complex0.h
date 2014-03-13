#ifndef COMPLEX0_H
#define COMPLEX0_h
#include "CheckInput.h"

class Complex
{
private:
	double re_, im_;
public:
	Complex(double re = 0, double im = 0) {re_ = re; im_ = im;}
	~Complex() {};

	friend double Re(Complex const &a) { return a.re_; }
    friend double Im(Complex const &a) { return a.im_; }

	Complex operator+(const Complex & c);
	Complex operator-(const Complex & c);
	Complex operator*(const Complex & c);
	Complex operator~();

	friend Complex operator*(const Complex & c, const double x);
	friend Complex operator*(const double x, const Complex & c);

	friend std::ostream & operator<<(std::ostream & out, const Complex & c);
	friend std::istream & operator>>(std::istream & out, Complex & c);
};

#endif