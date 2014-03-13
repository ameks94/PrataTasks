#include <iostream>
#include <fstream>
int main(int argc, char * argv[])
{
	if (argc == 2)
	{
		std::cout << "Enter string: ";
		std::ofstream fout(argv[1]);
		char temp;
		do 
		{
			temp = std::cin.get();
			fout << temp;
		} while (temp != '$');
		fout.close();
	}
	else
	{
		std::cout << "You should write one filename." << std::endl;
	}
	system("pause");
	return 0;
}
