// list.cpp -- using a list
#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

int main()
{
	using namespace std;
	list<int> one(5, 2); // list of 5 2s
	int stuff[5] = {1,2,4,8, 6};
	list<int> two;
	two.insert(two.begin(),stuff, stuff + 5 );
	int more[6] = {6, 4, 2, 4, 6, 5};
	list<int> three(two);
	three.insert(three.end(), more, more + 6);

	auto out = [](int n){std::cout << n << " ";};
	cout << "List one: ";
	for_each(one.begin(),one.end(), out);
	cout << endl << "List two: ";
	for_each(two.begin(), two.end(), out);
	cout << endl << "List three: ";
	for_each(three.begin(), three.end(), out);
	three.remove(2);
	cout << endl << "List three minus 2s: ";
	for_each(three.begin(), three.end(), out);
	three.splice(three.begin(), one);
	cout << endl << "List three after splice: ";
	for_each(three.begin(), three.end(), out);
	cout << endl << "List one: ";
	for_each(one.begin(), one.end(), out);
	three.unique();
	cout << endl << "List three after unique: ";
	for_each(three.begin(), three.end(), out);
	three.sort();
	three.unique();
	cout << endl << "List three after sort & unique: ";
	for_each(three.begin(), three.end(), out);
	two.sort();
	three.merge(two);
	cout << endl << "Sorted two merged into three: ";
	for_each(three.begin(), three.end(), out);
	cout << endl;
	
	system("pause");

	return 0; 
}