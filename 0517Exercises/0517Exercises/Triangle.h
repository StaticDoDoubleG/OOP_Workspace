#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <cmath>
#include <iomanip>
#include "triangleError.h"
// Definition of Triangle class
class Triangle
{
private:
	double side1;
	double side2;
	double side3;
public:
	Triangle(double side1, double side2, double
		side3);
	double getArea() const;
	double getPerimeter() const;
};
#endif