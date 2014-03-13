#include "CheckInput.h"
const short size = 10;
int Fill_array(double ar[], int size)
{
	int i=0;
	cout << "Enter " << i+1 << " number (q - exit): ";
	while (i < size && (cin >> ar[i]))
	{
		i++;
		if(i < size)
		cout << "Enter " << i+1 << " number (q - exit): ";
	}
	return i;
}

void Show_array(double ar[], int size)
{
	for (int i = 0; i < size; i ++)
		cout << ar[i] << " ";
	cout << endl;
}

void Reverse_array(double *ar, int size)
{
	double temp;
	for (int i = 1; i < size/2; i++)
	{
		temp = ar[i];
		ar[i] = ar[size-1-i];
		ar[size-1-i] = temp;
	}
}

void main()
{
	double ar[10];
	cout << "Size of array: " << Fill_array(ar,10) << endl;
	cout << "Your array: ";
	Show_array(ar,10);
	Reverse_array(ar,size);
	cout << "Your changed array: ";
	Show_array(ar,size);
	system("pause");
}
