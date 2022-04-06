#ifndef RATIONAL_H_
#define RATIONAL_H_

#include <string>
#include <iostream>    
#include <sstream> 
using namespace std;

class Rational
{
private:
int numerator;
int denominator;
void reduce();  //reduces the fraction to simplified form

public:
    Rational() = default;
    Rational(int numerator,  int denominator): numerator{numerator}, denominator{denominator} {reduce();};

    //overloading the << operator, so you can output it with cout 
    friend ostream &operator<<(ostream &output, const Rational &r)
    {
        output << to_string(r.numerator) << "/" << to_string(r.denominator);
        return output;
    }
};
#endif 