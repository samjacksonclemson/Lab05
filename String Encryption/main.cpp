#include <iostream>
#include <string>
#include "EncryptableString.h"

using namespace std;


int main()
{

string userInput;

cout << "This is an Encryption program. Enter a string to encrypt: ";
cin >> userInput;

EncryptableString encryption {userInput};
encryption.encrypt();


cout << "Here is the encrypted string: " << encryption << endl;



    return 0; 
}