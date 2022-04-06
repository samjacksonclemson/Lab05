#ifndef RATIONAL_H_
#define RATIONAL_H_

#include <string>
#include <iostream>    

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
    friend std::ostream &operator<<(std::ostream &output, const Rational &r)
    {
        output << std::to_string(r.numerator) << "/" << std::to_string(r.denominator);
        return output;
    }
};
#endif 