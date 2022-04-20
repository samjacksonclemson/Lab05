#include <iostream>
#include <iomanip>
#include "accum.h"
using namespace std;

int main()
{
	// declare vectors
	vector<double> numbers;	
	vector<string> strings;

	// number input
	cout << "Enter four numbers: ";

	// populate numbers vector
	for (int i = 0; i < 4; ++i) 
	{ 
		double temp;
		cin >> temp;
		numbers.push_back(temp);
	}

	// output calling accum()
	cout << "The sum of the numbers is " << accum(numbers) << endl;

	// string input
	cout << "Enter four strings: ";

	// populate strings vector
	for (int i = 0; i < 4; ++i) 
	{
		string temp;
		cin >> temp;
		strings.push_back(temp);
	}

	// output calling accum()
	cout << "The sum of the strings is " << accum(strings) << endl;

	return 0;
}