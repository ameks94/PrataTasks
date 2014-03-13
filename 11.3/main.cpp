// randwalk.cpp -- using the Vector class
// compile with the vect.cpp file
#include <iostream>
#include <cstdlib>      // rand(), srand() prototypes
#include <ctime>        // time() prototype
#include "vect.h"

int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));     // seed random-number generator
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
	int N;
	double min;
	double max;
    cout << "Enter target distance (q to quit): ";
    while (cin >> target)
    {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;
		cout << "Enter number of attempts(q to quit): ";
		if (!(cin >> N) || N < 1)
		{
			break;
		}
		max = -1;
		min = 1e200;
		while(N--)
		{
			while (result.magval() < target)
			{
				direction = rand() % 360;
				step.reset(dstep, direction, Vector::POL);
				result = result + step;
				steps++;
			}
			if (min > steps)
				min = steps;
			if (max < steps)
				max = steps;
			steps = 0;
			result.reset(0.0, 0.0);
		}
		cout << "Min steps: " << min << endl
			<< "Max steps: " << max << endl
			<< "Average value: " << (max + min)/2 << endl;
        cout << "Enter target distance (q to quit): ";
    }
    cout << "Bye!\n";
	system("pause");
    return 0; 
}
