#ifndef TRAPEZOID_H_
#define TRAPEZOID_H_

#include "Shape.h"
template <typename T>
class Trapezoid : public Shape<T> // inherit publically from Shape
{
private:
	T base1 {0};
	T base2 {0};
	T height {0};

public:
	Trapezoid() : Shape<T>("Trapezoid") {}
	Trapezoid(T base1, T base2, T height) : Shape<T>("Trapezoid"),
		base1{base1}, base2{base2}, height{height} {}
	
	virtual T getArea() override
		{ return 0.5 * (base1 + base2) * height; }

};

#endif
