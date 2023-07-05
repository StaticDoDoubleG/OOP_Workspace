#include "Fraction.h"


int main()
{
	// Creation of two objects and testing the plus and minus operator
	Fraction fract1(2, 3);
	Fraction fract2(1, 2);
	cout << "fract1: " << fract1.print() << endl;
	cout << "fract2: " << fract2.print() << endl;
	Fraction fract3 = +fract1;
	Fraction fract4 = -fract2;
	cout << "Result of +fract1: " << fract3.print() << endl;
	cout << "Result of -fract2: " << fract4.print() << endl << endl;
	return 0;
}

/*
Overriding(same parameter, redefine)

Overloading(different parameter)

class A{
	void f(int a, int b);
}

class A : class B{
	void f(int a, int b); //Overriding(redefine parent function)
	void f(float a, float b); //Overloading
}

Why operator overloading?
-different parameters


*/