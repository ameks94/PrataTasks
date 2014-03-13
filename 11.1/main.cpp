#include <iostream>
#include <fstream>
#include <cstdlib> // rand(), srand() prototypes
#include <ctime> // time() prototype

#include "vect.h"

int main()
{
	  using namespace std;
	  using VECTOR::Vector;

	  ofstream fout;

	  srand(time(0)); // seed random-number generator
  
	  double direction;
	  Vector step;
	  Vector result(0.0, 0.0);
	  unsigned long steps = 0;
	  double target;
	  double dstep;
  
	  cout << "Enter target distance (q to quit): ";
	  while (cin >> target)
	  {
			fout.open("save.txt");
			cout << "Enter step length: ";
			if (!(cin >> dstep))
				break;
			fout << "Target distance: " << target << ", Step Size: " << dstep << '\n';
			while (result.magval() < target)
			{
				  fout << steps << ": " << result << '\n';
				  direction = rand() % 360;
				  step.reset(dstep, direction, Vector::POL);
				  result = result + step;
				  steps++;
			}
			fout << "After " << steps << " steps, the subject "
			  "has the following location:\n";
			fout << result << endl;
			result.polar_mode();
			fout << " or\n" << result << endl;
			fout << "Average outward distance per step = "
			  << result.magval()/steps << endl;
			steps = 0;
			result.reset(0.0, 0.0);
			cout << "Enter target distance (q to quit): ";
			fout.close();
	  }
	  cout << "Bye!\n";
	  system("pause");
	  return 0;
}
