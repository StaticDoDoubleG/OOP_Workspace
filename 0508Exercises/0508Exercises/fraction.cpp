#include "fraction.h"

Fraction::Fraction()
	: numerator(0), denominator(1)
{
}

Fraction::Fraction(int n)
	: numerator(n), denominator(1){

}

Fraction::Fraction(int numor, int denom)
	: numerator(numor), denominator(denom)
{
	normalize();
}

// Definition
Fraction::Fraction(double value)
{
	denominator = 1;
	while ((value - static_cast <int>(value)) > 0.0)
	{
		value *= 10.0;
		denominator *= 10;
	}
	numerator = static_cast <int>(value);
	normalize();
}

// Definition
Fraction :: operator double()
{
	double num = static_cast <double>(numerator);
	return (num / denominator);
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

// Definition of >> operator

istream& operator >> (istream& left, Fraction& right)
{
	cout << "Enter the value of numerator: ";
	left >> right.numerator;
	//istream << "Enter the value of denominator: ";
	cout << "Enter the value of denominator: ";
	left >> right.denominator;
	right.normalize();
	return left;
}


// Definition of << operator

ostream& operator <<(ostream& left, const Fraction& right)
{
	left << right.numerator << "/" << right.denominator << endl;
	return left;
}


// Definition of equality operator
bool operator == (const Fraction & left,
	const Fraction & right)
{
return (left.numerator * right.denominator ==
right.numerator * left.denominator);
}

bool operator > (const Fraction& left,
	const Fraction& right)
{
	return (left.numerator * right.denominator >
		right.numerator * left.denominator);
}

bool operator < (const Fraction& left,
	const Fraction& right)
{
	return (left.numerator * right.denominator <
		right.numerator * left.denominator);
}

// Definition of addition operator
const Fraction operator+(const Fraction& left,
	const Fraction& right)
{
	int newNumer = left.numerator * right.denominator +
		right.numerator * left.denominator;
	int newDenom = left.denominator * right.denominator;
	Fraction result(newNumer, newDenom);
	return result;
}

const Fraction operator-(const Fraction& left,
	const Fraction& right)
{
	int newNumer = left.numerator * right.denominator -
		right.numerator * left.denominator;
	int newDenom = left.denominator * right.denominator;
	Fraction result(newNumer, newDenom);
	return result;
}


const Fraction operator*(const Fraction& left,
	const Fraction& right)
{
	int newNumer = left.numerator * right.numerator;
	int newDenom = left.denominator * right.denominator;
	Fraction result(newNumer, newDenom);
	return result;
}


const Fraction operator/(const Fraction& left,
	const Fraction& right)
{
	int newNumer = left.numerator * right.denominator;
	int newDenom = right.numerator * left.denominator;
	Fraction result(newNumer, newDenom);
	return result;
}


// Definition of Unary plus operator
Fraction Fraction :: operator+ ()
{
	//Fraction temp(+numerator, denominator); // a new object
	//return temp;
	if (numerator >= 0) {
		this->normalize();
		return *this;
	}
	else {
		numerator = -numerator;
		this->normalize();
		return *this;
	}
}

// Definition of Unary minus operator
Fraction Fraction :: operator- ()
{
	//Fraction temp(-numerator, denominator); // a new object
	//return temp;
	numerator = -numerator;
	this->normalize();
	return *this;
}


// Definition pre-increment operator
Fraction& Fraction :: operator++()
{
	numerator = numerator + denominator;
	this->normalize();
	return *this;
}

// Definition pre-decrement operator
Fraction& Fraction :: operator--()
{
	numerator = numerator - denominator;
	this->normalize();
	return *this;
}

// Definition of post-increment operator
const Fraction Fraction :: operator++(int dummy)
{
	Fraction temp(numerator, denominator);
	++(*this);
	return temp;
}

// Definition of post-decrement operator
const Fraction Fraction :: operator--(int dummy)
{
	Fraction temp(numerator, denominator);
	--(*this);
	return temp;
}

// Definition of inequality operator
const bool Fraction :: operator!=(const Fraction& right)
{
	return this->numerator * right.denominator != right.numerator * this->denominator;
}
// Definition of assignment operator
Fraction& Fraction :: operator=(const Fraction& right)
{
	if (*this != right) //or check in another way
	{
		numerator = right.numerator;
		denominator = right.denominator;
	}
	return *this;
}

//General Fractions
// Definition of += operator
Fraction& Fraction :: operator+=(const Fraction& right)
{
	numerator = numerator * right.denominator + denominator * right.numerator;
	denominator = denominator * right.denominator;
	normalize();
	return *this;
}
// Definition of -= operator
Fraction& Fraction :: operator-=(const Fraction& right)
{
	numerator = numerator * right.denominator - denominator * right.numerator;
	denominator = denominator * right.denominator;
	normalize();
	return *this;
}
// Definition of *= operator
Fraction& Fraction :: operator*=(const Fraction& right)
{
	numerator = numerator * right.numerator;
	denominator = denominator * right.denominator;
	normalize();
	return *this;
}
// Definition of /= operator
Fraction& Fraction :: operator/=(const Fraction& right)
{
	//numerator = numerator * right.denominator / denominator * right.numerator;
	numerator = numerator * right.denominator;
	denominator = denominator * right.numerator;
	normalize();
	return *this;
}

//int Fractions with =
// Definition of += operator
Fraction& Fraction :: operator+=(int n)
{
	Fraction right(n, 1);
	numerator = numerator * right.denominator + denominator * right.numerator;
	denominator = denominator * right.denominator;
	normalize();
	return *this;
}
// Definition of -= operator
Fraction& Fraction :: operator-=(int n)
{
	Fraction right(n, 1);
	numerator = numerator * right.denominator - denominator * right.numerator;
	denominator = denominator * right.denominator;
	normalize();
	return *this;
}
// Definition of *= operator
Fraction& Fraction :: operator*=(int n)
{
	Fraction right(n, 1);
	numerator = numerator * right.numerator;
	denominator = denominator * right.denominator;
	normalize();
	return *this;
}
// Definition of /= operator
Fraction& Fraction :: operator/=(int n)
{
	Fraction right(n, 1);
	//numerator = numerator * right.denominator / denominator * right.numerator;
	denominator = denominator * right.numerator;
	normalize();
	return *this;
}

//int Fractions just unary
// Definition of + operator
Fraction& Fraction :: operator+(int n)
{
	//Fraction right(n, 1);
	Fraction temp(numerator, denominator);
	temp.numerator = temp.numerator + temp.denominator * n;
	//denominator = denominator * right.denominator;
	normalize();
	return temp;
}
// Definition of - operator
Fraction& Fraction :: operator-(int n)
{
	//Fraction right(n, 1);
	//cout << numerator << " " << denominator;
	Fraction temp(numerator, denominator);
	temp.numerator = temp.numerator - temp.denominator * n;
	//denominator = denominator * right.denominator;
	normalize();
	return temp;
}
// Definition of * operator
Fraction& Fraction :: operator*(int n)
{
	//Fraction right(n, 1);
	Fraction temp(numerator, denominator);
	temp.numerator = temp.numerator * n;
	//denominator = denominator * right.denominator;
	normalize();
	return temp;
}
// Definition of / operator
Fraction& Fraction :: operator/(int n)
{
	//Fraction right(n, 1);
	//numerator = numerator * right.denominator / denominator * right.numerator;
	Fraction temp(numerator, denominator);
	temp.denominator = temp.denominator * n;
	normalize();
	return temp;
}