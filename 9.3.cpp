#include <iostream>
struct chaff
{
	char dross[20];
	int slag;
};

void main()
{
	using std::cout;
	using std::cin;

	const int BufSize = 5;
	const int ArrSize = 2;
	char *buf = new char [BufSize * sizeof(chaff)];

	chaff *arr = new(buf) chaff[ArrSize];
	strcpy(arr[0].dross, "value1");
	arr[0].slag = 1;
	strcpy(arr[1].dross, "value2");
	arr[1].slag = 2;

	for (int i = 0; i < ArrSize; i++)
	{
		cout << "\ndross: " << arr[i].dross << "\nslag: " << arr[i].slag << std::endl;
	}

	delete[] buf;

	system("pause");
}