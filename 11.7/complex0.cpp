#include "complex0.h"

Complex Complex::operator+(const Complex & c)
{
	return Complex(re_ + c.re_, im_ + c.im_);
}

Complex Complex::operator-(const Complex & c)
{
	return Complex(re_ - c.re_, im_ - c.im_);
}

Complex Complex::operator*(const Complex & c)
{
	return Complex(re_ * c.re_ - im_ * c.im_, re_* c.im_ + im_ * c.re_);
}

Complex operator*(const Complex &c, const double x)
{
	return Complex(c.re_ * x, c.im_ * x);
}

Complex Complex::operator~()
{
	return Complex(re_, -im_);
}

Complex operator*(const double x, const Complex & c)
{
	return c * x;
}

std::ostream & operator<<(std::ostream & out, const Complex & c)
{
	out << "(" << Re(c) << ", " << Im(c) << "i)" << endl;
	return out;
}

std::istream & operator>>(std::istream & in, Complex & c)
{
	double re, im;
	cout << "real: ";
	if (in >> re)
	{
		cout << "imaginary: ";
		in >> im;
		c = Complex(re,im);
	}
	return in;
}