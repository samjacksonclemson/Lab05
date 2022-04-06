#include "Rational.h"
#include <cmath>
void Rational::reduce()
{
    bool isNeg = false;;

    //determines if fraction will be negative based on input
    if ((denominator < 0 && numerator > 0) || (denominator > 0 && numerator < 0))
    {
        isNeg = true;
    }
    
    //turns fraction into a positive fraction to make reducing it a simpler process
    numerator = abs(numerator);
    denominator = abs(denominator);

    //reduces the positive fraction
    int tempNumerator = numerator;
    for (int i = tempNumerator; i >= 1; --i)
    {
        if (numerator % i == 0 && denominator % i == 0)
        {
            numerator = numerator / i;
            denominator = denominator / i;
           
        }
    }

    //turns fraction negative if isNeg is true
    if (isNeg)
    {numerator *= -1;}
}
