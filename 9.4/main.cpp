#include <iostream>

#include "sales.h"

bool fixIstream(std::istream &in);

int main()
{
  using std::cout;
  using std::cin;

  int const kArSize(3);

  double ar[kArSize] = {5.7, 6.1, 4.8};
  SALES::Sales a, b;

  SALES::setSales(a);
  SALES::setSales(b, ar, kArSize);

  cout << "Now, the results.\n";

  SALES::showSales(a);
  SALES::showSales(b);
  
  fixIstream(std::cin); std::cin.get();
  return 0;
}

bool fixIstream (std::istream &in)
{
  in.clear();
  char probe;
  while (probe = in.get() != '\n');
  if (!in)
    return false;
  return true;
}