#include "CheckInput.h"
template<typename T>
T max5(T *arr, int size)
{
	for (short i = 0; i < size; i++)
		if (arr[i] > arr[0])
			arr[0] = arr[i];
	return arr[0];
}
char* maxstring(char** adress, int sizeadr)
{
	int j = 0;
	int numberString = 0;
	int size_max = strlen(adress[0]);
	for (int i = 0; i < sizeadr; i++)
	{
		if(size_max < strlen(adress[i]))
		{
			size_max = strlen(adress[i]);
			numberString = i;
		}
	}
	return adress[numberString];
}
void main()
{
	double ardouble[4];
	int arint[6];
	cout << "Enter double elements:" << endl;
	for (short i = 0; i < 4; i++)
	{
		cout << i+1;
		input(&ardouble[i]," element: ");
	}
	cout << "Max element: " << max5(ardouble,4) << endl;

	cout << "Enter int elements:" << endl;
	for (short i = 0; i < 6; i++)
	{
		cout << i+1;
		input(&arint[i]," element: ");
	}
	cout << "Max element: " << max5(arint,6) << endl;
	char **arr = new char*[3];
	arr[0] = "My name is Alex";
	arr[1] = "Hello world, i am a programmer.";
	arr[2] = "What is your name?";
	cout << maxstring(arr,3) << endl;
	system("pause");
}
