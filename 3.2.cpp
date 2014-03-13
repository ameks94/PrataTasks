#include "CheckInput.h"
const auto k = 308.4/2.539;

void main ()
{
	double feets,inches,pounds;
	input(&feets, "Enter height in feets and inches: \nFeets: ");
	input(&inches, "Inches:  ");
	input(&pounds, "Enter weight in pounds: ");
	inches += feets *= 12;
	inches *=0.0254;
	pounds /= 2.2;
	cout << "Body-mass index: " << pounds / (inches*inches) << endl;
	system("pause");
}

