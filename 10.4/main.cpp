#include <iostream>
#include "sales.h"

bool fixIstream(std::istream &in);

int main()
{
  using std::cout;
  using std::cin;
  using std::endl;
  int const kArSize(3);

  double ar[kArSize] = {5.7, 6.1, 4.8};
  Sales a;
  Sales b(ar,kArSize);

  cout << "Set sale a: " << endl;
  a.setSales();

  cout << "Now, the results.\n";

  a.showSales();
  b.showSales();
  
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