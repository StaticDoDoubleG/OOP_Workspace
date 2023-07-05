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
	* 호스트가 영향 받음(비상수)
	* 반환 객체는 영향 받은 호스트 객체의 복사본(reference)
	* lvalue(좌가)로 사용됨(비상수)
	We now overload the prefix increment
	and the prefix decrement operator.
	Each operator has a side effect changing
	its operand; the returned object is a copy
	of the changed object. This means that the
	returned value must be an lvalue(비상수).*/

	//Declaration of Postfix In/Decrement Operator
	const Fraction operator++(int);
	const Fraction operator--(int);
	//뒤의 int는 별 의미는 없고 앞 전증감 연산자와 구분키 위해 작성.
	/*
	* 호스트가 영향 받음(비상수)
	* 반환 객체는 임시 객체로 생성(no reference)
	* rvalued(우가)로 사용됨(상수)
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