#include "CheckInput.h"
#include <fstream>
struct Pat 
{
	string name;
	double summ;
};
void main()
{
	bool none = true;
	Pat *patrons;
	ifstream fin;
	fin.open("6.9.txt");
	if (!fin)
  	{
   	    cout << "Unable to read from a file specified." << std::endl;
   	    cin.get();
    	exit(EXIT_FAILURE);
  	}
	int n;
	fin >> n;
	fin.get(); // read newline symbol
	patrons = new Pat[n];
	for (short i = 0; i < n; i++)
	{
		getline(fin,patrons[i].name);
		fin >> patrons[i].summ;
		fin.get();
	}
	fin.close();
	cout << endl << "Grand patrons:" << endl;
	for (short i = 0; i < n; i++)
		if (patrons[i].summ >= 10000)
		{
			cout << patrons[i].name << endl;
			none = false;
		}
	if (none) cout << "none" << endl;
	none = true;
	cout << endl << "Patrons:" << endl;
	for (short i = 0; i < n; i++)
		if (patrons[i].summ < 10000)
		{
			cout << patrons[i].name << endl;
			none = false;
		}
	if (none) cout << "none" << endl;
	system("pause");
}