#include "CheckInput.h"
template<typename T>
T max5(T arr[5])
{
	for (short i = 0; i < 5; i++)
		if (arr[i] > arr[0])
			arr[0] = arr[i];
	return arr[0];
}
void main()
{
	double ardouble[5];
	int arint[5];
	cout << "Enter double elements:" << endl;
	for (short i = 0; i < 5; i++)
	{
		cout << i+1;
		input(&ardouble[i]," element: ");
	}
	cout << "Max element: " << max5(ardouble) << endl;
	cout << "Enter int elements:" << endl;
	for (short i = 0; i < 5; i++)
	{
		cout << i+1;
		input(&arint[i]," element: ");
	}
	cout << "Max element: " << max5(arint) << endl;
	system("pause");
}
