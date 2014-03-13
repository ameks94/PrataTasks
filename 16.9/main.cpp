#include <iostream>
#include <vector>
#include <list>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <algorithm>    // std::sort
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	std::vector<int> vi0;
	std::vector<int> vi;
	std::list<int> * li = new std::list<int>;
	clock_t t1;
	clock_t t2;
	srand(time(NULL));
	const int MAX = 10;
	
	for (int  i = 0; i < MAX; i++)
	{
		vi0.push_back(rand() % MAX);
		vi.push_back(rand() % MAX);
		li->push_back(rand() % MAX);
	}

	//check time sorting vi
	t1 = clock();
	std::sort(vi.begin(), vi.end());
	t2 = clock();
	cout << "Sorting time for vector: " << (double)(t2 - t1) / CLOCKS_PER_SEC 
		<< " ms" << endl;

	//check time sorting li
	t1 = clock();
	li->sort();
	t2 = clock();
	cout << "Sorting time for list: " << (double)(t2 - t1) / CLOCKS_PER_SEC 
		<< " ms" << endl;

	li->clear();
	li = new std::list<int>(vi0.begin(), vi0.end());

	//check time copy-sort-vect-li
	t1 = clock();
	std::copy(li->begin(), li->end(), vi.begin());
	sort(vi.begin(), vi.end());
	std::copy(vi.begin(), vi.end(), li->begin());
	t2 = clock();
	cout << "Sorting time for list-vector-copy: " << (double)(t2 - t1) / CLOCKS_PER_SEC
		<< " ms" << endl;

	system("pause");
	return 0;
}
