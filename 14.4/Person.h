#pragma once
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

class Person
{
	string Fname_;
	string Lname_;
public:
	Person(const string & Fname = "Petia", const string & Lname = "Petrov")
		: Fname_(Fname), Lname_(Lname) {}
	virtual void Show() const;
	~Person(void) {}
};

class Gunslinger : virtual public Person
{
	double draw_time_;
	int number_;
public:
	Gunslinger( const string & Fname = "Gun", const string & Lname = "Good", double draw_time = 43, int number = 3)
		: Person(Fname, Lname), draw_time_(draw_time), number_(number) {}
	virtual void Show() const;
	double Draw() const { return draw_time_; }
	~Gunslinger() {};
};

class PokerPlayer : virtual public Person
{
public:
	PokerPlayer(const string & Fname = "Hosov", const string & Lname = "Mike")
		: Person(Fname, Lname) {}
	short Draw() const;
	virtual void Show() const {Person::Show();}

};

class BadDude : public Gunslinger, public PokerPlayer
{
	float time;
	int next;
public:
	BadDude(const string & Fname = "Bad", const string & Lname = "Simon", const double d = 0.01, const int t = 100)
		: Gunslinger(Fname, Lname, d, t) {}
	double Gdraw() const;
	short Cdraw() const;
	void Show() const;

};