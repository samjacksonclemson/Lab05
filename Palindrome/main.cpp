#include <iostream>
#include <string>
#include "Pstring.h"

using namespace std;

int main()
{
    string userInput;
    cout << "This is a palindrome-testing program. Enter a string to test: ";
    cin >> userInput;
    
    Pstring palindrome {userInput};

    if (palindrome.isPalindrome())
    {
        cout << palindrome << " is a palindrome\n";
    }
    else
    {
        cout << palindrome << " is not a palindrome\n";
    }

    return 0;
}