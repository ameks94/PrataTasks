#include <iostream>
#include "sales.h"

bool fixIstream(std::istream &in);

// copies the lesser of 4 or n items from the array ar
// to the sales member of s and computes and stores the
// average, maximum, and minimum values of the entered items;
// remaining elements of sales, if any, set to 0
Sales::Sales()
{
	for (int i = 0; i < QUARTERS; ++i)
		sales[i] = 0;
	average = min = max = 0;
}
Sales::Sales( const double ar[], int n)
{
  if (n <= 0)
    return;
  n > QUARTERS ? n = QUARTERS : n;

  sales[0] = average = min = max = ar[0];
  for (int i = 1; i < n; ++i)
  {
    average += sales[i] = ar[i];
    min > sales[i] ? min = sales[i] : min;
    max < sales[i] ? max = sales[i] : max;
  }

  for (int i = n; i < QUARTERS; ++i)
    sales[i] = 0;

  average /= n;
}
  
// gathers sales for 4 quarters interactively, stores them
// in the sales member of s and computes and stores the
// average, maximum, and minimum values
void Sales::setSales()
{
  using std::cin; using std::cout;

  double sales[QUARTERS];
  for (int i = 0; i < QUARTERS; ++i)
  {
    cout << "Enter sales for quarter #" << i + 1 << ": "; cout.flush();
    while (!(cin >> sales[i]))
    {
      fixIstream(cin);
      cout << "Enter a valid value: "; cout.flush();
    }
  }

  *this = Sales(sales,QUARTERS);
}
  
// display all information in structure s
void Sales::showSales()
{
  using std::cout;
  cout << "\nSales were:\n";
  for (int i = 0; i < QUARTERS; ++i)
    cout << sales[i] << " in quarter " << i + 1 << '\n';
  cout << "with minimum of " << min << ", maximum of " << max
    << " and average of " << average << '\n';
  cout.flush();
}