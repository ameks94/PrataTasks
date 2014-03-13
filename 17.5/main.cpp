#include <iostream>
#include <string>
#include <set>
#include <fstream>
using std::string;
using std::cin;
using std::cout;

int main()
{
	std::set<string> Mfriends, Pfriends, total;

	std::ifstream Mfile("mat.dat");
	std::ifstream Pfile("pat.dat");
	std::ofstream MPfile("matnpat.dat");
	string temp;

	if (!Mfile.is_open() || !Pfile.is_open() || !MPfile.is_open())
	{
		cout << "Sorry, but i can not open file for reading.\n";
		exit(EXIT_FAILURE);
	}
	//Mats friends
	while(!Mfile.eof())
	{
		std::getline(Mfile, temp);
		Mfriends.insert(temp);
	}
	Mfile.close();
	cout << "Mats friends: ";
	for(auto i = Mfriends.begin(); i != Mfriends.end(); i++)
		cout << *i << " ";
	cout << std::endl;

	//Pats friends
	while(!Pfile.eof())
	{
		std::getline(Pfile, temp);
		Pfriends.insert(temp);
	}
	Pfile.close();
	cout << "Pats friends: ";
	for(auto i = Pfriends.begin(); i != Pfriends.end(); i++)
		cout << *i << " ";
	cout << std::endl;
	
	total.insert(Mfriends.begin(), Mfriends.end());
	total.insert(Pfriends.begin(), Pfriends.end());
	
	for (auto i = total.begin(); i != total.end(); i++)
		MPfile << *i << std::endl;
	MPfile.close();
	system("pause");
	return 0;
}
