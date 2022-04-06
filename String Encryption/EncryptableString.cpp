#include "EncryptableString.h"

void EncryptableString::encrypt()
{
std::string val = *this;    //val is equivalent to the string value
int valLength = val.length();

for (int i = 0; i < valLength; ++i)
{
    if (val[i] == 'z')  //if end of alphabet it moves to front of alphabet
        {val[i] = 'a';}
    else if (val[i] == 'Z') //if end of alphaet capitalized it moves to front of capitalized alphabet
        {val[i] = 'A';}
    else
        {val[i] += 1;}  //if not one of those cases it increments by 1 down the alphabet
}

*this = val;    //this changes the string's value into the encrypted version 

};