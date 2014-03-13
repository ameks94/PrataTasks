// dma.cpp --dma class methods

#include "baseDMA.h"
#include <cstring>

// baseDMA methods
DMA::DMA(const char * l, int r)
{
    label = new char[std::strlen(l) + 1];
    std::strcpy(label, l);
    rating = r;
}

DMA::DMA(const DMA & rs)
{
    label = new char[std::strlen(rs.label) + 1];
    std::strcpy(label, rs.label);
    rating = rs.rating;
}

DMA::~DMA()
{
    delete [] label;
}

DMA & DMA::operator=(const DMA & rs)
{
    if (this == &rs)
        return *this;
    delete [] label;
    label = new char[std::strlen(rs.label) + 1];
    std::strcpy(label, rs.label);
    rating = rs.rating;
    return *this;
}
    
std::ostream & operator<<(std::ostream & out, const DMA & rs)
{
    out << "Label: " << rs.label << std::endl;
    out << "Rating: " << rs.rating << std::endl;
    return out;
}

std::ostream & operator<<(std::ostream & out, const baseDMA & rs)
{
	out << ( DMA &) rs; 
	return out;
}

// lacksDMA methods
lacksDMA::lacksDMA(const char * c, const char * l, int r)
    : DMA(l, r)
{
    std::strncpy(color, c, 39);
    color[39] = '\0';
}

lacksDMA::lacksDMA(const char * c, const baseDMA & rs)
    : DMA(rs)
{
    std::strncpy(color, c, COL_LEN - 1);
    color[COL_LEN - 1] = '\0';
}

std::ostream & operator<<(std::ostream & out, const lacksDMA & ls)
{
    out << (const DMA &) ls;
    out << "Color: " << ls.color << std::endl;
    return out;
}

// hasDMA methods
hasDMA::hasDMA(const char * s, const char * l, int r)
         : DMA(l, r)
{
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}

hasDMA::hasDMA(const char * s, const baseDMA & rs)
         : DMA(rs)
{
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA & hs)
         : DMA(hs)  // invoke base class copy constructor
{
    style = new char[std::strlen(hs.style) + 1];
    std::strcpy(style, hs.style);
}

hasDMA::~hasDMA()
{
    delete [] style;
}

hasDMA & hasDMA::operator=(const hasDMA & hs)
{
    if (this == &hs)
        return *this;
    DMA::operator=(hs);  // copy base portion
    delete [] style;         // prepare for new style
    style = new char[std::strlen(hs.style) + 1];
    std::strcpy(style, hs.style);
    return *this;
}
    
std::ostream & operator<<(std::ostream & out, const hasDMA & hs)
{
    out << (const DMA &) hs;
    out << "Style: " << hs.style << std::endl;
    return out;
}
