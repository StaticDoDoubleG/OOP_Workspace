#include "fraction.h"

int main()
{
	/*
	* in1
	//Declare and Define Unary Operator
	// Creation of two objects and testing the plus and minus operator
	Fraction fract1(2, 3);
	Fraction fract2(1, 2);
	cout << "fract1: " << fract1.print() << endl;
	cout << "fract2: " << fract2.print() << endl;
	Fraction fract3 = +fract1;
	Fraction fract4 = -fract2;
	cout << "Result of +fract1: " << fract3.print() << endl;
	cout << "Result of -fract2: " << fract4.print() << endl << endl;
	

	//in2
	//Declare prefix/postdix increment/decrement
	// Creation of four objects and testing the ++ and -- operators
	Fraction fract3(3, 4);
	Fraction fract4(4, 5);
	Fraction fract5(5, 6);
	Fraction fract6(6, 7);
	cout << "fract3: " << fract3.print() << endl;
	cout << "fract4: " << fract4.print() << endl;
	cout << "fract5: " << fract5.print() << endl;
	cout << "fract6: " << fract6.print() << endl << endl;
	//prefix in/decrement
	++fract3;
	--fract4;
	//postfix in/decrement
	Fraction fract55 = fract5++;
	Fraction fract66 = fract6--;
	cout << "Result of ++fract3: " << fract3.print() << endl;
	cout << "Result of --fract4: " << fract4.print() << endl;
	cout << "Result of fract5++: " << fract5.print() << endl;
	cout << "Result of fract6--: " << fract6.print() << endl << endl;
	
	//in3
	// Creation of two objects and testing the plus and minus operator
	Fraction fract1(2, 3);
	Fraction fract2(1, 2);
	cout << "fract1: " << fract1.print() << endl;
	cout << "fract2: " << fract2.print() << endl;
	+fract1;
	-fract2;
	cout << "Result of +fract1: " << fract1.print() << endl;
	cout << "Result of -fract2: " << fract2.print() << endl << endl;
	*/

	//in4
	// Testing assignment & inequality operators
	Fraction fract3(3, 4);
	Fraction fract4(4, 5);
	if (fract3 != fract4)
	{
		fract3 = fract4;
	}
	cout << "Result of fract3 != fract4: "
		<< to_string(fract3 != fract4) << endl;
	cout << "fract3: " << fract3.print() << endl << endl;
	/*
	//in5
	// Testing compound assignment operators
	Fraction fract7(3, 5);
	Fraction fract8(4, 7);
	Fraction fract9(5, 8);
	Fraction fract10(7, 9);
	fract7 += 2; // == Fraction(2, 1)
	fract8 -= 3; // == Fraction(3, 1)
	fract9 *= 4; // == Fraction(4, 1)
	fract10 /= 5; // == Fraction(5, 1)
	cout << "Result of fract7 += 2: " << fract7.print() << endl;
	cout << "Result of fract8 -= 3: " << fract8.print() << endl;
	cout << "Result of fract9 *= 4: " << fract9.print() << endl;
	cout << "Result of fract10 /= 5: " << fract10.print() << endl << endl;
	*/
	//in6
	// Testing binary arithmetic operators
	Fraction fract7(3, 5);
	Fraction fract8 = fract7 + 2; // == Fraction(2, 1)
	Fraction fract9 = fract7 - 3; // == Fraction(3, 1)
	Fraction fract10 = fract7 * 4; // == Fraction(4, 1)
	Fraction fract11 = fract7 / 5; // == Fraction(5, 1)
	cout << "Result of fract7 + 2: " << fract8.print() << endl;
	cout << "Result of fract7 - 3: " << fract9.print() << endl;
	cout << "Result of fract7 * 4: " << fract10.print() << endl;
	cout << "Result of fract7 / 5: " << fract11.print() << endl << endl;
	return 0;
}