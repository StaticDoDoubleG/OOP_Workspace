#include "triangle.h"
#include "triangleError.h"
// Constructor with try block
Triangle::Triangle(double sd1, double sd2, double sd3)
try : side1(sd1), side2(sd2), side3(sd3)
{
	bool cond1 = (side1 > 0.0 && side2 > 0.0 && side3 > 0.0);
	bool cond2 = side1 + side2 > side3;
	bool cond3 = side2 + side3 > side1;
	bool cond4 = side3 + side1 > side2;
	if (!cond1)
	{
		throw TriangleError(1);
	}
	else if (!(cond2 && cond3 && cond4))
	{
		throw TriangleError(2);
	}
}
catch (...)
{
	throw;
}
// The definition for getArea function
double Triangle::getArea() const
{
	double s = (side1 + side2 + side3) / 2;
	return (sqrt(s * (s - side1) * (s - side2) * (s - side3)));
}
// The definition for getPerimeter function
double Triangle::getPerimeter() const
{
	return (side1 + side2 + side3);
}