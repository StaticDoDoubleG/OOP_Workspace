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
string Fraction::print()
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

int main()
{
	// Instantiation of some objects
	Fraction fract1;
	Fraction fract2(14, 21);
	Fraction fract3(11, -8);
	Fraction fract4(fract3);
	// Printing the object
	cout << "Printing four fractions after constructed: " << endl;
	cout << "fract1: " << fract1.print() << endl;
	cout << "fract2: " << fract2.print() << endl;
	cout << "fract3: " << fract3.print() << endl;
	cout << "fract4: " << fract4.print() << endl;
	// Using mutators
	cout << "Changing the first two fractions and printing them:" << endl;
	fract1.setNumerator(4);
	cout << "fract1: " << fract1.print() << endl;
	fract2.setDenominator(-5);
	cout << "fract2: " << fract2.print() << endl;
	// Using accessors
	cout << "Testing the changes in two fractions:" << endl;
	cout << "fract1 numerator: " << fract1.getNumerator() << endl;
	cout << "fract2 numerator: " << fract2.getDenominator() << endl;
	return 0;
}