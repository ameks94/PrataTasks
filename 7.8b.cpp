//arrobj.cpp -- functions with array objects
#include "CheckInput.h"
#include <iostream>
#include <array>
const int Seasons = 4;
const string Snames[Seasons] = 
{"Spring","Summer","Fall","Winter"};
struct Expenses
{
	double elements[Seasons];
};

void fill(double * pa);
void show(double da[]);
int main()
{
    Expenses expenses;
	fill(expenses.elements);
	show(expenses.elements);
     std::cin.get();
     std::cin.get();
    return 0;
}

void fill(double * pa)
{
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << "Enter " << Snames[i] << " expenses: ";
        std::cin >> pa[i];
    }
}

void show(double da[])
{
    double total = 0.0;
    std::cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << Snames[i] << ": $" << da[i] << '\n';
        total += da[i];
    }
    std::cout << "Total: $" << total << '\n';
}
