#include "Wine.h"
Wine::Wine(void)
	: string("none"), PairArray()
{
}

Wine::Wine(const char * l , int y, const int yr[], const int bot[])
	: string(l), PairArray(ArrayInt(yr,y),ArrayInt(bot,y))
{

}

Wine::Wine(const char * l, int y)
	: string(l), PairArray(ArrayInt(y), ArrayInt(y))
{
}

void Wine::GetBottles()
{
	using std::cin;
	using std::cout;

	cout << "Enter years and bottle counts: " << endl;
	for(size_t i = 0; i < PairArray::first().size(); i++)
	{
		cout << i + 1;
		input(&PairArray::first()[i]," vintage year: ");
		cout << i + 1;
		input(&PairArray::second()[i]," bottle count for year: ");
	}
}

void Wine::Show() const
{
	cout << "Name: \"" << (string &) *this << "\"" << endl;
	for (size_t i = 0; i < PairArray::first().size(); i++)
	{
		cout << i + 1 << ", year: " << PairArray::first()[i] << endl;
		cout << i + 1 << ", bottles: " << PairArray::second()[i] << endl;
	}
}

Wine::~Wine(void)
{
}
