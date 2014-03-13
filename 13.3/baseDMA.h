#pragma once
#include <iostream>
using std::cout;
using std::endl;

class DMA
{
private:
    char * label;
    int rating;

public:
	DMA(const char * l = "NuLL", int r = 0);
	DMA(const DMA & rs);
	virtual ~DMA();
	DMA & operator=(const DMA & rs);
	virtual void View() = 0;
	friend std::ostream & operator<<(std::ostream & out, const DMA & rs);
};

//  Base Class Using DMA
class baseDMA : public DMA
{
public:
	baseDMA(const char * l = "NuLL", int r = 0) : DMA(l,r) {}
    friend std::ostream & operator<<(std::ostream & out, 
                                     const baseDMA & rs);
	virtual void View()
	{
		std::cout << *this;
	}
};

// derived class without DMA
// no destructor needed
// uses implicit copy constructor
// uses implicit assignment operator
class lacksDMA :public DMA
{
private:
    enum { COL_LEN = 40};
    char color[COL_LEN];
public:
    lacksDMA(const char * c = "blank", const char * l = "null",
              int r = 0);
    lacksDMA(const char * c, const baseDMA & rs);
    friend std::ostream & operator<<(std::ostream & out, 
                                     const lacksDMA & rs);
	virtual void View()
	{
		std::cout << *this;
	}
};

// derived class with DMA
class hasDMA :public DMA
{
private:
    char * style;
public:
    hasDMA(const char * s = "none", const char * l = "null",
              int r = 0);
    hasDMA(const char * s, const baseDMA & rs);
    hasDMA(const hasDMA & hs);
    ~hasDMA();
    hasDMA & operator=(const hasDMA & rs);  
    friend std::ostream & operator<<(std::ostream & out, 
                                     const hasDMA & rs);
	virtual void View()
	{
		std::cout << *this;
	}

};
