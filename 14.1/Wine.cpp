#include "Wine.h"
Wine::Wine(void)
	: name_("none"), p_()
{
}

Wine::Wine(const char * l , int y, const int yr[], const int bot[])
	: name_(l), p_(ArrayInt(yr,y),ArrayInt(bot,y))
{

}

Wine::Wine(const char * l, int y)
	: name_(l), p_(ArrayInt(y), ArrayInt(y))
{
}

void Wine::GetBottles()
{
	using std::cin;
	using std::cout;

	cout << "Enter years and bottle counts: " << endl;
	for(size_t i = 0; i < p_.first().size(); i++)
	{
		cout << i + 1;
		input(&p_.first()[i]," vintage year: ");
		cout << i + 1;
		input(&p_.second()[i]," bottle count for year: ");
	}
}

void Wine::Show() const
{
	cout << "Name: \"" << name_ << "\"" << endl;
	for (size_t i = 0; i < p_.first().size(); i++)
	{
		cout << i + 1 << ", year: " << p_.first()[i] << endl;
		cout << i + 1 << ", bottles: " << p_.second()[i] << endl;
	}
}

Wine::~Wine(void)
{
}
