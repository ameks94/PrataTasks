#pragma once
#include <iostream>
#include <string>
#include <valarray>
using std::string;
using std::cout;
using std::endl;
using std::cin;
//Class Pair
template <class T1, class T2>
class Pair
{
private:
    T1 a;
    T2 b;
public:
    T1 & first();
    T2 & second();
    T1 first() const { return a; }
    T2 second() const { return b; }
    Pair(const T1 & aval, const T2 & bval) : a(aval), b(bval) { }
    Pair() {}
};

template<class T1, class T2>
T1 & Pair<T1,T2>::first()
{
    return a;
}

template<class T1, class T2>
T2 & Pair<T1,T2>::second()
{
    return b;
}

//Class Wine
class Wine : private std::string, private Pair< std::valarray<int>, std::valarray<int> >
{
private:
	typedef std::valarray<int> ArrayInt;
	typedef Pair<ArrayInt, ArrayInt> PairArray;
	
public:
	Wine(void);
	Wine(const char * l, int y, const int yr[], const int bot[]);
	Wine(const char * l, int y);
	void GetBottles();
	string & Label() { return (string &) *this; }
	int sum() const { return PairArray::second().sum(); };

	void Show() const; 

	~Wine(void);
};
// chaeck input functions
template <typename AnyType>
static void input (AnyType *a, char *mesg = " ")
{
	if (mesg != " ")
		cout << mesg;
	cin >> *a;
	while (cin.get()!='\n')
	{
		cin.clear();           
		cin.sync();            
		cout << "Value is incorrect. Try again:\n";
		cin >> *a;
	}
}

static void input (string *str, char *mesg = " ")
{
	if (mesg != " ")
		cout << mesg;
	std::getline(std::cin,*str);
}
