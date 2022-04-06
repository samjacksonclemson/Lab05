#ifndef ENCRYPTABLESTRING_H_
#define ENCRYPTABLESTRING_H_

#include <string>

class EncryptableString : public std::string
{

public:
EncryptableString() = default;
EncryptableString(std::string val) : std::string(val) {};


void encrypt();


};



#endif