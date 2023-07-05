#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>
#include <string>
using namespace std;
class Fraction
{
private:
	int numerator;
	int denominator;
public:
	Fraction();
	Fraction(int numer, int denom);
	Fraction(const Fraction& fract);
	~Fraction();
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
