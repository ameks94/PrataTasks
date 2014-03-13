#include <iostream>
int main()
{
	int count(0);
	std::cout << "Enter string: ";
	while(std::cin.get() != '$')
		count++;
	std::cout << count <<std::endl;
	system("pause");
	return 0;
}
