#include <iostream>
#include <algorithm>    // std::random_shuffle
#include <vector>       // std::vector
#include <time.h>
//template <typename AnyType>
//void input (AnyType *a, char *mesg = " ")
//{
//	if (mesg != " ")
//		cout << mesg;
//	cin >> *a;
//	while (cin.get()!='\n')
//	{
//		cin.clear();           
//		cin.sync();            
//		cout << "Value is incorrect. Try again:\n";
//		cin >> *a;
//	}
//}

std::vector<int> Lotto(int all, int need)
{
	std::vector<int> a;
	for (int i = 0; i < all; i++)
		a.push_back(i + 1);

	random_shuffle(a.begin(),a.end());
	a.erase(a.begin() + need, a.end());
	return a;	
}

int main()
{
	using std::cout;
	using std::endl;
	using std::ios_base;
	int all = 51;
	int need = 6;
	std::vector<int> winners(6);

	std::srand ( unsigned ( time(0) ) );

	winners = Lotto(all,need);

	cout << "There are 6 winner numbers:\n";
	for(std::vector<int>::iterator it = winners.begin(); it != winners.end(); it++)
		cout << *it << " ";
	cout << endl;
	system("pause");
	return 0;
}
