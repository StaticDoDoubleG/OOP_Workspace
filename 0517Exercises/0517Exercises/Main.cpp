#include "triangle.h"
int main()
{


	cout << "This is Triangle EX" << endl;

	double side1, side2, side3;
	for (int i = 0; i < 4; i++)
	{
		cout << "Enter the sides of triangle separated by space: ";
		cin >> side1;
		cin >> side2;
		cin >> side3;
		// The try-catch block
		try
		{
			Triangle triangle(side1, side2, side3);
			cout << "The area is: " << fixed << setprecision(2);
			cout << triangle.getArea() << endl;
			cout << "The perimeter is: " << fixed << setprecision(2);
			cout << triangle.getPerimeter() << endl;
		}
		catch (TriangleError te)
		{
			cout << te.message();
		}
	}



	return 0;
}