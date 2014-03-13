// static.cpp -- using a static local variable
#include <iostream>
#include <string>
using std::string;
// constants
const int ArSize = 10;

// function prototype
void strcount(const string & str);

int main()
{
    using namespace std;
    string string;
    char next;

    do
	{
		cout << "Enter line (empty line to quit):\n";
		getline(cin,string);
		cin.clear();
		cin.sync();
		if(string != "") 
			strcount(string);
	}
	while(string != "");
        
    cout << "Bye\n";
// code to keep window open for MSVC++
/*
cin.clear();
    while (cin.get() != '\n')
        continue;
    cin.get();
*/
    return 0;
}

void strcount(const string & str)
{
    using namespace std;
    static int total = 0;        // static local variable
    int count = 0;               // automatic local variable

    cout << "\"" << str <<"\" contains ";
    
	count = str.size();

    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";
}
