#include "plorg.h"

Plorg::Plorg(char name[19], int CI)
{
	strcpy(name_,name);
	CI_ = CI;
}

void Plorg::changeCI(int CI) 
{
	CI_ = CI;
}

void Plorg::showPlorg() 
{
	cout << "Name: " << name_ << "  CI: " << CI_;
}

Plorg::~Plorg()
{

}