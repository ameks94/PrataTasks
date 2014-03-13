#include <iostream>
using namespace std;

template <typename T>
long double sum_values(T t)
{
	return (long double) t;
}

template <typename T,typename... Args>
long double sum_values(T t, Args... args)
{
	return long double(sum_values(args...) + t);
}

int main(void)
{
	cout << "sum_values(2,3.4) = " << sum_values(2,3.4) << endl;
	cout << "sum_values(1,2,3,4,5,6,99.1) = " << sum_values(1,2,3,4,5,6,99.1) << endl;
	system("pause");
	return 0;
}