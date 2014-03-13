#include <iostream>
#include "sales.h"

bool fixIstream(std::istream &in);

// copies the lesser of 4 or n items from the array ar
// to the sales member of s and computes and stores the
// average, maximum, and minimum values of the entered items;
// remaining elements of sales, if any, set to 0
void SALES::setSales(SALES::Sales &s, const double ar[], int n)
{
  if (n <= 0)
    return;
  n > QUARTERS ? n = QUARTERS : n;

  s.sales[0] = s.average = s.min = s.max = ar[0];
  for (int i = 1; i < n; ++i)
  {
    s.average += s.sales[i] = ar[i];
    s.min > s.sales[i] ? s.min = s.sales[i] : s.min;
    s.max < s.sales[i] ? s.max = s.sales[i] : s.max;
  }

  for (int i = n; i < QUARTERS; ++i)
    s.sales[i] = 0;

  s.average /= n;
}
  
// gathers sales for 4 quarters interactively, stores them
// in the sales member of s and computes and stores the
// average, maximum, and minimum values
void SALES::setSales(SALES::Sales &s)
{
  using std::cin; using std::cout;

  for (int i = 0; i < QUARTERS; ++i)
  {
    cout << "Enter sales for quarter #" << i + 1 << ": "; cout.flush();
    while (!(cin >> s.sales[i]))
    {
      fixIstream(cin);
      cout << "Enter a valid value: "; cout.flush();
    }
  }

  s.average = s.max = s.min = s.sales[0];
  for (int i = 1; i < QUARTERS; ++i)
  {
    s.average += s.sales[i];
    s.min > s.sales[i] ? s.min = s.sales[i] : s.min;
    s.max < s.sales[i] ? s.max = s.sales[i] : s.max;
  }
  s.average /= QUARTERS;
}
  
// display all information in structure s
void SALES::showSales(const SALES::Sales &s)
{
  using std::cout;
  cout << "\nSales were:\n";
  for (int i = 0; i < QUARTERS; ++i)
    cout << s.sales[i] << " in quarter " << i + 1 << '\n';
  cout << "with minimum of " << s.min << ", maximum of " << s.max
    << " and average of " << s.average << '\n';
  cout.flush();
}