#include "EncryptableString.h"

void EncryptableString::encrypt()
{
std::string val = *this;
int valLength = val.length();

for (int i = 0; i < valLength; ++i)
{
    if (val[i] == 'z')
        {val[i] = 'a';}
    else if (val[i] == 'Z')
        {val[i] = 'A';}
    else
        {val[i] += 1;}
}

*this = val;

};