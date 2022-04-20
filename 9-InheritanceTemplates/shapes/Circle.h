#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Shape.h"

template <typename T>
class Circle : public Shape<T> // inherit publically from Shape
{
private: 
	T radius {0};
	const double PI {3.14};

public:
	//* Derived constructors must call base constructor:
	Circle() : Shape<T>("Circle") {}							// default
	Circle(T radius) : Shape<T>("Circle"), radius{radius} {}	// argument

	virtual T getArea() override
		{ return PI * radius * radius; }
};

#endif
