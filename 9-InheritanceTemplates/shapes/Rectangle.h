#ifndef RECTANGLE_H_
#define RECTANGLE_H_
#include "Shape.h"

template <typename T>

//* all instances of Shape must be followed by the template specifier T
//* because we're inheriting a template from a template
class Rectangle : public Shape<T>	
{
private:
  T length;
  T width;

public:
	Rectangle() : Shape<T>("Rectangle") {}		// default constructor 

	Rectangle(T length, T width) : Shape<T>("Rectangle"),
		length{length}, width{width} {}
	
	virtual T getArea() override
		{ return length * width; }
};
#endif