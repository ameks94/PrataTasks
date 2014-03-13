#ifndef MOVE_H
#define MOVE_H
#include "CheckInput.h"

class Move
{
private:
	double x;
	double y;
public:
	Move(double a = 0, double b = 0) {x = a, y = b;}
	void showmove() const {cout << "x = " << x << "  " << "Y = " << y << endl;}
	Move add(const Move & m) const {return Move(x + m.x, y + m.y);};
	void reset(double a = 0, double b = 0) {x = a, y = b;}
};

#endif