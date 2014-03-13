#include <iostream>
#include <fstream>
int main(int argc, char * argv[])
{
	using std::cout;
	using std::cin;

	if (argc != 3)
	{
		cout << "Error. Should be 2 arguments!\n";
		exit(EXIT_FAILURE);
	}
	std::ifstream Fread(argv[2]);
	std::ofstream Fwrite(argv[1]);

	if(!Fread.is_open()) 
	{
		cout << "Can not open the file " << argv[2] << std::endl;
		exit(EXIT_FAILURE);
	}
	char temp = Fread.get();
	while(!Fread.eof())
	{
		Fwrite << temp;
		temp = Fread.get();
	}
	Fread.close();
	Fwrite.close();
	cout << "Success.\n";
	return 0;
}
