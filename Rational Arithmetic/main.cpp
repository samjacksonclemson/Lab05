#include <iostream>
#include <sstream>
#include <string>
#include "Rational.h"
using namespace std;

int main()
{

int numerator;
int denominator;

cout << "Enter the numerator and denominator separated by a space: ";
cin >> numerator;
cin >> denominator;

Rational fraction (numerator, denominator);
cout << "Reduced form: " << fraction << endl;
    return 0;
}