#include "CheckInput.h"
void input_results(int *ar)
{
	for (short i = 0; i < 10; i++)
	{
		cout << "Enter " << i + 1 << " result: ";
		if(!(cin >> ar[i]) || ar[i] == 0)
		{
			ar[i] = 0;
			cin.clear();
			cin.sync();
			break;
		}
	}
}

float average(int *ar, int n)
{
	int summ(0);
	for (short i = 0; i < n; i++)
		summ += ar[i];
	return float(summ)/(n);
}

void output_results(int *ar)
{
	int i(0);
	if (ar[i] == 0) 
		cout << "There is no value to output" << endl;
	else
	{
		cout << "Your values: ";
		while(ar[i] && i < 10)
			cout << ar[i++] << " ";
		cout << endl << "Your average: " << average(ar,i) << endl;
	}
}

void main()
{	
	int ar[10] = {0};
	cout << "Enter 10 results, please." << endl <<
		"Negative number or letter to stop input:" << endl;
	input_results(ar);
	output_results(ar);
	system("pause");
}
