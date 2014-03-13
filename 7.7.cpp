// arrfun3.cpp -- array functions and const
#include <iostream>
const int Max = 5;

// function prototypes
double* fill_array(double*, double*);
void show_array(double*, double*);  // don't change data
void revalue(double r, double*, double*);

int main()
{
    using namespace std;
    double properties[Max];

    double* end = fill_array(properties, &properties[Max]);
    show_array(properties, end);
    cout << "Enter revaluation factor: ";
    double factor;
    while (!(cin >> factor))    // bad input
    {
        cin.clear();
        while (cin.get() != '\n')
            continue;
        cout << "Bad input; Please enter a number: ";
    }
    revalue(factor, properties, end);
    show_array(properties, end);
    cout << "Done.\n";
    // cin.get();
    // cin.get();
	system("pause");
    return 0;
}

double* fill_array(double* begin, double* end)
{
    using namespace std;
    double temp;
	double* i;
	int count = 1;
    for (i = begin; i < end; i++)
    {
        cout << "Enter value #" << (count++) << ": ";
        cin >> temp;
        if (!cin)    // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
           cout << "Bad input; input process terminated.\n";
           break;
        }
        else if (temp < 0)     // signal to terminate
            break;
        *i = temp;
    }
    return i;
}

// the following function can use, but not alter,
// the array whose address is ar
void show_array(double* begin, double* end)
{
    using namespace std;
	int count = 1;
    for (double* i = begin; i < end; i++)
    {
        cout << "Property #" << (count++) << ": $";
        cout << *i << endl;
    }
}

// multiplies each element of ar[] by r
void revalue(double r, double* begin, double* end)
{
    for (double* i = begin; i < end; i++)
        *i *= r;
}
