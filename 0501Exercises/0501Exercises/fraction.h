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
	/*
	// Declaration of Unary plus
	const Fraction operator+() const;
	// Declaration of Unary minus
	const Fraction operator-() const;
	*/
	// Declaration of Unary plus
	Fraction operator+();
	// Declaration of Unary minus
	Fraction operator-();

	//Declaration of Prefix In/Decrement Operator
	Fraction& operator++();
	Fraction& operator--();
	/*
	* ȣ��Ʈ�� ���� ����(����)
	* ��ȯ ��ü�� ���� ���� ȣ��Ʈ ��ü�� ���纻(reference)
	* lvalue(�°�)�� ����(����)
	We now overload the prefix increment
	and the prefix decrement operator.
	Each operator has a side effect changing
	its operand; the returned object is a copy
	of the changed object. This means that the
	returned value must be an lvalue(����).*/

	//Declaration of Postfix In/Decrement Operator
	const Fraction operator++(int);
	const Fraction operator--(int);
	//���� int�� �� �ǹ̴� ���� �� ������ �����ڿ� ����Ű ���� �ۼ�.
	/*
	* ȣ��Ʈ�� ���� ����(����)
	* ��ȯ ��ü�� �ӽ� ��ü�� ����(no reference)
	* rvalued(�찡)�� ����(���)
	We now overload the postfix increment and the
	postfix decrement operators.
	Since we cannot return the host object before
	changing it, we need to create a temporary object
	out of the host object, apply the side effect to the
	host object, and then return the temporary object.
	The dummy integer parameter creates a unique
	signature to distinguish between the prototype of
	the pre-operator and post-operator; it is ignored.*/

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