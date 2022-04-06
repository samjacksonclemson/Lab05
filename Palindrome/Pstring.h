#ifndef PSTRING_H_
#define PSTRING_H_

#include <string>

class Pstring : public std::string
{
    public:
        Pstring() = default;

        //calls the stl string class construction with user inputed value
        Pstring(std::string val): std::string(val) {};
    
        bool isPalindrome();
};



#endif