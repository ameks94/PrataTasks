#pragma once
#include "port.h"
class VintagePort : public Port
{
private:
	char * nickname;
	int year;
public:
	VintagePort(void);
	VintagePort(const char * br, int b, const char * nn, int y);
	VintagePort(const VintagePort & vp);
	~VintagePort(void) { delete [] nickname; }
	VintagePort & operator=(const VintagePort & vp);
	void Show() const;
	friend std::ostream & operator<<(std::ostream & out, const VintagePort & vp);
};

