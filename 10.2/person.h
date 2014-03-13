#ifndef PERSON_H
#define PERSON_H
#include "CheckInput.h"

class Person
{
private:
	static const int LIMIT = 25;
	string lname;
	char fname[LIMIT];
public:
	Person() {lname = ""; fname[0] = '\0'; } // #1
	Person(const string & ln, const char * fn = "Heyyou");
	void Show() const;
	void FormalShow() const;
};

#endif