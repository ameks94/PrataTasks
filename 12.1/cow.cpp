#include "cow.h"

Cow::Cow():hobby(new char[20])
{
	strcpy(name,"Jacson");
	strcpy(hobby,"reading books");
	weight = 60;
}

Cow::Cow(const char * nm, const char * ho, double wt): hobby(new char[strlen(ho) + 1])
{
	strcpy(name,nm);
	strcpy(hobby,ho);
	weight = wt;
}

Cow::Cow(const Cow & c): hobby(new char[strlen(c.hobby) + 1])
{
	*this = c;
}

Cow & Cow::operator=(const Cow & c)
{
	if (this == &c)
		return *this;

	delete[] hobby;
	hobby = new char[strlen(c.hobby) + 1];
	strcpy(name,c.name);
	strcpy(hobby,c.hobby);
	weight = c.weight;
	return *this;
}

void Cow::ShowCow() const
{
	cout << "Name: " << name
		<< "\nHobby: " << hobby
		<< "\nWeight: " << weight << endl;
}



