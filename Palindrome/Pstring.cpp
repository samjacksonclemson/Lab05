#include <iostream>
#include <string>
#include "Pstring.h"

bool Pstring::isPalindrome()
{
    std::string str = *this;     //str is equivalent to the string value

    bool isPalindrome = true;
    int strLength = str.length();
    for (int i = 0; i < strLength; ++i)
    {
        //compares start of word with last letter of word, and it ignores capitalization
        if (tolower(str[i]) != tolower(str[strLength - 1 - i]))
        {
            isPalindrome = false;
        }
    }
  
    return isPalindrome;
}