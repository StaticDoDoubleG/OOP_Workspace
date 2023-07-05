#include "fraction.h"

int main()
{
	// Using convertor constructor to create two new objects
	Fraction fract18(5); // Changing an integer to a fraction
	Fraction fract19(23.45); // Changing a double value to a fraction
	cout << "fract18: " << fract18 << endl;
	cout << "fract19: " << fract19 << endl << endl;
	// Changing a fraction to a double
	Fraction fract20(9, 13);
	cout << "double value of fract20 (9, 13): ";
	cout << setprecision(3) << fract20.operator double() << endl << endl;
	return 0;
}
/*
int main()
{
	// Testing extraction operator
	Fraction fract15;
	cin >> fract15;
	cout << "fract15: " << fract15 << endl << endl;
	// Creation of two new objects and
	// testing friend arithmetic operations
	Fraction fract16(1, 2);
	Fraction fract17(3, 4);
	cout << "fract16: " << fract16 << endl;
	cout << "fract17: " << fract17 << endl;
	cout << "fract16 + fract17 : " << fract16 + fract17 << endl;
	cout << "fract16 - fract17 : " << fract16 - fract17 << endl;
	cout << "fract16 * fract17 : " << fract16 * fract17 << endl;
	cout << "fract16 / fract17 : " << fract16 / fract17 << endl << endl;
	return 0;
}
*/
/*
int main()
{
	// Creation of two new objects and testing relational operators
	Fraction fract13(2, 3);
	Fraction fract14(1, 3);
	cout << "fract13: " << fract13.print() << endl;
	cout << "fract14: " << fract14.print() << endl;
	cout << "fract13 == fract14: " << boolalpha;
	cout << (fract13 == fract14) << endl;
	cout << "fract13 != fract14: " << boolalpha;
	cout << (fract13 != fract14) << endl;
	cout << "fract13 > fract14: " << boolalpha;
	cout << (fract13 > fract14) << endl;
	cout << "fract13 < fract14: " << boolalpha;
	cout << (fract13 < fract14) << endl << endl;
	return 0;
}
*/
/*
int main() {
	// Creation of two new objects and testing friend arithmetic operations
	Fraction fract11(1, 2);
	Fraction fract12(3, 4);
	cout << "fract11: " << fract11.print() << endl;
	cout << "fract12: " << fract12.print() << endl;
	Fraction fract111 = fract11 + fract12;
	Fraction fract112 = fract11 - fract12;
	Fraction fract113 = fract11 * fract12;
	Fraction fract114 = fract11 / fract12;
	cout << "fract11 + fract12 : " << fract111.print() << endl;
	cout << "fract11 - fract12 : " << fract112.print() << endl;
	cout << "fract11 * fract12 : " << fract113.print() << endl;
	cout << "fract11 / fract12 : " << fract114.print() << endl << endl;
	return 0;
}
*/
/*
#include "smallest.h"
#include <iostream>
int main()
{
	// Instantiation of an smallest object
	Smallest smallest;
	// Applying the function call operator to objects
	cout << "Smallest so far: " << smallest(5) << endl;
	cout << "Smallest so far: " << smallest(9) << endl;
	cout << "Smallest so far: " << smallest(4) << endl;
	return 0;
}
*/
/*
#include "array.h"
int main()
{
	// Instantiation of array object with three elements
	Array arr(3);
	// Using mutator operator [ ]
	arr[0] = 22.31;
	arr[1] = 78.61;
	arr[2] = 65.22;
	for (int i = 0; i < 3; i++)
	{
		cout << "Value of arr [" << i << "]: " << arr[i] << endl;
	}
	// Using accessor operator [ ]
	const Array arr2(arr);
	for (int i = 0; i < 3; i++)
	{
		cout << "Value of arr2 [" << i << "]: " << arr2[i] << endl;
	}
	return 0;
}
*/