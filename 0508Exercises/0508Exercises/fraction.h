#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Fraction
{
private:
	int numerator;
	int denominator;
public:
	Fraction();
	Fraction(int n);
	Fraction(int numer, int denom);
	//Double Declaration
	Fraction(double value);
	// Declaration
	operator double();
	Fraction(const Fraction& fract);
	~Fraction();

	// Declaration of >> operator
	friend istream& operator >> (istream& left, Fraction& right);

	// Definition of << operator
	friend ostream& operator << (ostream& left, const Fraction& right);


	// Declaration of equality operator
	friend bool operator == (const Fraction & left,
		const Fraction & right);

	friend bool operator < (const Fraction& left,
		const Fraction& right);

	friend bool operator > (const Fraction& left,
		const Fraction& right);

	// Declarations of addition operator
	friend const Fraction operator+(const Fraction& left,
		const Fraction& right);

	friend const Fraction operator-(const Fraction& left,
		const Fraction& right);

	friend const Fraction operator*(const Fraction& left,
		const Fraction& right);

	friend const Fraction operator/(const Fraction& left,
		const Fraction& right);

	// Declaration of Unary plus
	Fraction operator+();
	// Declaration of Unary minus
	Fraction operator-();

	//Declaration of Prefix In/Decrement Operator
	Fraction& operator++();
	Fraction& operator--();

	//Declaration of Postfix In/Decrement Operator
	const Fraction operator++(int);
	const Fraction operator--(int);

	// Declaration of inequality operator
	const bool operator!=(const Fraction& right);
	// Declaration of assignment operator
	Fraction& operator=(const Fraction& right);

	// Declarations of += operator
	Fraction& operator+=(const Fraction& right);
	// Declaration of -= operator
	Fraction& operator-=(const Fraction& right);
	// Declaration of *= operator
	Fraction& operator*=(const Fraction& right);
	// Declaration of /= operator
	Fraction& operator/=(const Fraction& right);

	Fraction& operator+=(int n);
	Fraction& operator-=(int n);
	Fraction& operator*=(int n);
	Fraction& operator/=(int n);

	Fraction& operator+(int n);
	Fraction& operator-(int n);
	Fraction& operator*(int n);
	Fraction& operator/(int n);

	int getNumerator() const { return numerator; }
	int getDenominator() const { return denominator; }
	void setNumerator(int numer);
	void setDenominator(int denom);
	string print();
private:
	bool normalize();
	int gcd(int n, int m);
};
#endif