#include <iostream>
#include <string>
#include <fstream>
int main(int argc, char * argv[])
{
	using std::cout;
	using std::cin;

	if (argc != 4)
	{
		cout << "Error. Should be 3 arguments!\n";
		exit(EXIT_FAILURE);
	}

	std::ifstream Fread1(argv[1]);
	std::ifstream Fread2(argv[2]);
	std::ofstream Fwrite(argv[3]);

	if (!Fread1.is_open() || !Fread2.is_open())
	{
		cout << "I can not open some files.\n";
		exit(EXIT_FAILURE);
	}

	do 
	{
		std::string temp;
		if(!Fread1.eof())
		{
			std::getline(Fread1, temp);
			Fwrite << temp << (Fread2.eof() ? '\n' : ' ');
		}
		if(!Fread2.eof())
		{
			std::getline(Fread2, temp);
			Fwrite << temp << '\n';
		}
	}
	while(!Fread1.eof() || !Fread2.eof());

	Fread1.close();
	Fread2.close();
	Fwrite.close();
	cout << "Success.\n";
	return 0;
}
