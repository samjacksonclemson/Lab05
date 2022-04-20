#ifndef ACCUM_H_
#define ACCUM_H_

#include <vector>
#include <string>

template <typename T>
T accum(std::vector <T> v)
{
	T sum = T();	// initialize sum with T default constructor
	
	for (T temp : v)
	{
		sum += temp;	// add temp to sum
	}

	return sum;
}

std::string accum(std::vector<std::string> v)
{
	std::string output;

	// loop to format output string
	for (int i = 0; i < 4; ++i)
	{
		// last iteration doesn't need a comma
		if (i != 3)
			output += (v[i] + ", ");
		else 
			output += (v[i]);
	}

	return output;
}

#endif // ACCUM_H_
