#include "Person.h"

//Person

void Person::Show() const
{
	cout << "First name: " << Fname_ 
		<< ". Last name: " << Lname_ << endl; 
}

//Gunslinger
void Gunslinger::Show() const
{
	Person::Show();
	cout << "Draw time: " << draw_time_ << 
		". Number pasechek: " << number_ << endl;
}

// PockerPlayer
short PokerPlayer::Draw() const
{
	return (rand() % 52 + 1);
}


//BadDude
void BadDude::Show() const
{
	Gunslinger::Show();
}

double BadDude::Gdraw() const
{
	return Gunslinger::Draw();
}

short BadDude::Cdraw() const 
{
	return PokerPlayer::Draw();
}
