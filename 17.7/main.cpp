#include <vector>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void ShowStr(const string & s)
{
	cout << s << '\n';
}

class Store
{
	ofstream * out_;
public:
	Store(ofstream & out) : out_(&out) {}
	void operator()(const string &) const;

};

void Store::operator()(const string & s) const
{
	size_t len = s.size();
	out_->write((char *)&len, sizeof(std::size_t));
	out_->write(s.data(), len);
}

void GetStrs(ifstream & in, vector<string> & vstr)
{
	char * temp;
	size_t len;
	while(!in.eof())
	{
		in.read((char*)&len, sizeof(len));

		if (in.eof())
			break;
		temp = new char[len + 1];
		in.read(temp, len);
		temp[len] = '\0';
		string str = temp;
		vstr.push_back(str);
		delete [] temp;
	}
	
}

int main(void)
{
	vector<string> vostr;
	string temp;

	cout << "Enter strings (empty to quit):\n";
	while (getline(cin, temp) && temp != "")
		vostr.push_back(temp);
	cout << "Here is your input.\n";
	for_each(vostr.begin(), vostr.end(), ShowStr);

	ofstream fout ("strings.dat", ios_base::out | ios_base::binary);
	for_each(vostr.begin(), vostr.end(), Store(fout));
	fout.close();

	vector<string> vistr;
	ifstream fin("strings.dat", ios_base::in | ios_base::binary);
	if (!fin.is_open())
	{
		cerr << "Could not open file for input.\n";
		exit(EXIT_FAILURE);
	}
	GetStrs(fin, vistr);
	cout << "\nHere are the strings read from the file:\n";
	for_each(vistr.begin(), vistr.end(), ShowStr);
	system("pause");
	return 0;
}