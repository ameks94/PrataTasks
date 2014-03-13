#include "stonewt.h"
using namespace std;

int main ()
{
	const int size = 6;
	Stonewt w[size] = {Stonewt(3.5), Stonewt(43.6), Stonewt(3,12)};

	for (int  i = 3; i < size; i++)
	{
		double n;
		cout << "Enter weight of " << i+1 << " element in pounds: ";
		input(&n);
		w[i] = Stonewt(n);
	}
	Stonewt min = w[0], max = w[0], Limit(11,0.0);
	int counter = 0;
	for (int i = 0; i < size; i++)
	{
		min = (min > w[i] ? w[i] : min);
		max = (max < w[i] ? w[i] : max);
		if(w[i] > Limit) counter++;
	}

	cout << "Min element: " << min 
		<< "Max element: " << max
		<< "The number of elements that are greater than 11 the Stone: " << counter << endl;
	system("pause");
	return 0;
}