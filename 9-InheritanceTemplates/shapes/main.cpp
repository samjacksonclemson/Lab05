#include "Shape.h"
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"
#include "Trapezoid.h"
#include <iostream>
#include <iomanip>

#include <vector>

using namespace std;

int main()
{
	// create double objects by specifying in <type> operator
	Circle<double> dCircle(2.0);
	Square<double> dSquare(2.0);
	Rectangle<double> dRectangle(2.5, 3.0);
	Trapezoid<double> dTrapezoid(2.5, 3.5, 4.0);

	// make a vector of pointers to all Shape<double> objects created above
	vector<Shape<double> *>shapeVect1 {&dCircle, &dSquare, &dRectangle, &dTrapezoid};

	// configure output 
	cout << fixed << setprecision(1);

	// print areas of all Shape<double> objects with range based for loop
	for (Shape<double> *out : shapeVect1)
	{
		cout << "Area of " << out->printName() << " is: " << out->getArea() << endl;
	}

	// create int objects by specifying in <type> operator
	Circle<int> iCircle(2);
	Square<int> iSquare(2);
	Rectangle<int> iRectangle(2, 3);
	Trapezoid<int> iTrapezoid(2, 3, 4);

	// make a vector of pointers to all Shape<int> objects created above
	vector<Shape<int> *>shapeVect2 {&iCircle, &iSquare, &iRectangle, &iTrapezoid};

	// print areas of all Shape<int> objects
	for (Shape<int> *out : shapeVect2)
	{
		cout << "Area of " << out->printName() << " is: " << out->getArea() << endl;
	}

	return 0;
}
