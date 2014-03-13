#include <iostream>
#include <fstream>
#include "emp.h"
using namespace std;

int const kMax = 10;

int main(void)
{
	abstr_emp *arr[kMax];
	fstream file("log176.dat", ios_base::in | ios_base::out);

	int counter = 0;

	do
	{
		int identificator;
		std::string fname, lname, job, reportsto;
		int inchargeof;

		file >> identificator;
		
		if (file.good())
		{
			file.get();
			getline(file, fname);
			getline(file, lname);
			getline(file, job);

			if (identificator == 2 || identificator == 3)
				getline(file, reportsto);

			if (identificator == 1 || identificator == 3)
				file >> inchargeof;

			switch (identificator)
			{
			case 0:
				arr[counter++] = new employee(fname, lname, job);
				break;

			case 1:
				arr[counter++] = new manager(fname, lname, job, inchargeof);
				break;

			case 2:
				arr[counter++] = new fink(fname, lname, job, reportsto);
				break;

			case 3:
				arr[counter++] = new highfink(fname, lname, job, reportsto, inchargeof);
				break;

			default:
				cout << "Corrupted finks.txt!\n";
				file.close();
				exit(EXIT_FAILURE);
			}
			//cout << "identificator is " << identificator << "\n";
		}
	}
	while (!file.fail() && counter < kMax);

	if (counter)
	{
		cout << "This is your current base:\n\n";
		for (int i = 0; i < counter; ++i)
			arr[i]->ShowAll();
	}

	if (counter >= kMax)
	{
		cout << "\n\nBase of maximum size, no entries can be added.\n";
		file.close();
		exit(0);
	}

	cout << "\n\nNew entries!\n";
	char input;
	file.clear();
	do
	{
		cout << "Choose\n1 - Create employee\n - Create manager\n3 - Create fink\n4 - Create highfink\n5 - for quit\n";
		cin >> input;
		switch (input)
		{
		case '1':
			arr[counter++] = new employee();
			arr[counter - 1]->SetAll();
			arr[counter - 1]->WriteAll(file);
			break;

		case '2':
			arr[counter++] = new manager();
			arr[counter - 1]->SetAll();
			arr[counter - 1]->WriteAll(file);
			break;

		case '3':
			arr[counter++] = new fink();
			arr[counter - 1]->SetAll();
			arr[counter - 1]->WriteAll(file);
			break;

		case '4':
			arr[counter++] = new highfink();
			arr[counter - 1]->SetAll();
			arr[counter - 1]->WriteAll(file);
			break;
		}
	}
	while (counter < kMax && input != '5');

	if (counter)
	{
		cout << "This is your updated base:\n\n";
		for (int i = 0; i < counter; ++i)
			arr[i]->ShowAll();
	}

	file.close();
	for (int i = 0; i < counter; ++i)
		delete arr[i];

	cout << "\n\nSession finished!\n";

	system("pause");
	return 0;
}