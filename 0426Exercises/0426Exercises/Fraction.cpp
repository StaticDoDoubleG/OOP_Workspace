#include "Fraction.h"

Fraction::Fraction()
	: numerator(0), denominator(1)
{
}
Fraction::Fraction(int numor, int denom = 1)
	: numerator(numor), denominator(denom)
{
	normalize();
}
Fraction::Fraction(const Fraction& fract)
	: numerator(fract.numerator), denominator(fract.denominator)
{
}
Fraction :: ~Fraction()
{
}
string Fraction::print() const
{
	return to_string(numerator) + "/" + to_string(denominator);
}
void Fraction::setNumerator(int numer)
{
	numerator = numer;
	normalize();
}
void Fraction::setDenominator(int denom)
{
	denominator = denom;
	normalize();
}
bool Fraction::normalize()
{
	// Handling a denominator of zero
	if (denominator == 0)
	{
		cout << "Invalid denomination. Need to quit." << endl;
		return false;
	}
	// Changing the sign of denominator
	if (denominator < 0)
	{
		denominator = -denominator;
		numerator = -numerator;
	}
	// Dividing numerator and denominator by gcd
	int divisor = gcd(abs(numerator), abs(denominator));
	numerator = numerator / divisor;
	denominator = denominator / divisor;
	return true;
}
int Fraction::gcd(int n, int m)
{
	int gcd = 1;
	for (int k = 1; k <= n && k <= m; k++)
	{
		if (n % k == 0 && m % k == 0)
		{
			gcd = k;
		}
	}
	return gcd;
}