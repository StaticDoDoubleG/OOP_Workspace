#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
 
class Complex {
private:
	double x;
	double y;
public:
	Complex();
	Complex(double first, double second);
	Complex(const Complex& com);
	~Complex();

	//Declaration of += operator
	Complex& operator+=(const Complex& right);
	//Declaration of -= operator
	Complex& operator-=(const Complex& right);
	//Declaration of *= operator
	Complex& operator*=(const Complex& right);
	//Declaration of /= operator
	Complex& operator/=(const Complex& right);

	//Declaration of + operator
	friend const Complex operator+(const Complex& left, const Complex& right);
	//Declaration of - operator
	friend const Complex operator-(const Complex& left, const Complex& right);
	//Declaration of * operator
	friend const Complex operator*(const Complex& left, const Complex& right);
	//Declaration of / operator
	friend const Complex operator/(const Complex& left, const Complex& right);

	//Declaration of >> operator
	friend istream& operator >> (istream& left, Complex& right);
	//Definition of << operator
	friend ostream& operator << (ostream& left, const Complex& right);
};

int main() {
	Complex complex1(2.00, 3.00);
	Complex complex2(2.00, 3.00);
	Complex complex3(2.00, 3.00);
	Complex complex4(2.00, 3.00);
	Complex rvalue(1.00, 2.00);
	cout << fixed;
	cout << setprecision(2);
	cout << "complex1: " << complex1;
	cout << "complex2: " << complex2;
	cout << "complex3: " << complex3;
	cout << "complex4: " << complex4;
	cout << "rvalue: " << rvalue;

	cout << "complex1 += rvalue: " << (complex1 += rvalue);
	cout << "complex2 -= rvalue: " << (complex2 -= rvalue);
	cout << "complex3 *= rvalue: " << (complex3 *= rvalue);
	cout << "complex4 /= rvalue: " << (complex4 /= rvalue) ;

	cout << "resulting complex1 + rvalue: " << complex1 + rvalue;
	cout << "resulting complex2 - rvalue: " << complex2 - rvalue;
	cout << "resulting complex3 * rvalue: " << complex3 * rvalue;
	cout << "resulting complex4 / rvalue: " << complex4 / rvalue;

	cout << endl << "#-- Custom Test Cases " << endl << endl;
	Complex complex5(213.00, 322.00);
	Complex complex6(32.23, 37.00); //실수부 실수
	Complex complex7(-1232.00, 23.00); //실수부 작은 음수
	Complex complex8(72.00, 47.42); //허수부 실수
	Complex rvalue2(12.00, -2.00);
	cout << "complex5: " << complex5;
	cout << "complex6: " << complex6;
	cout << "complex7: " << complex7;
	cout << "complex8: " << complex8;
	cout << "rvalue2: " << rvalue2;

	cout << "complex5 += rvalue2: " << (complex5 += rvalue2);
	cout << "complex6 -= rvalue2: " << (complex6 -= rvalue2);
	cout << "complex7 *= rvalue2: " << (complex7 *= rvalue2);
	cout << "complex8 /= rvalue2: " << (complex8 /= rvalue2);

	cout << "resulting complex5 + rvalue2: " << complex5 + rvalue2;
	cout << "resulting complex6 - rvalue2: " << complex6 - rvalue2;
	cout << "resulting complex7 * rvalue2: " << complex7 * rvalue2;
	cout << "resulting complex8 / rvalue2: " << complex8 / rvalue2;
	cout << endl;
	

	Complex complex9(0.00, 3.00); //실수부 0
	Complex complex10(24.00, -12213.00);//허수부 작은 음수
	Complex complex11(8.00, 0.00); //허수부 0
	Complex complex12(-46432.00, -1243.00); //실허수부 작은 음수
	Complex rvalue3(1.23, 73.04); //rvalue 실허수부 실수 
	cout << "complex9: " << complex9;
	cout << "complex10: " << complex10;
	cout << "complex11: " << complex11;
	cout << "complex12: " << complex12;
	cout << "rvalue3: " << rvalue3;

	cout << "complex9 += rvalue3: " << (complex9 += rvalue3);
	cout << "complex10 -= rvalue3: " << (complex10 -= rvalue3);
	cout << "complex11 *= rvalue3: " << (complex11 *= rvalue3);
	cout << "complex12 /= rvalue3: " << (complex12 /= rvalue3);

	cout << "resulting complex9 + rvalue3: " << complex9 + rvalue3;
	cout << "resulting complex10 - rvalue3: " << complex10 - rvalue3;
	cout << "resulting complex11 * rvalue3: " << complex11 * rvalue3;
	cout << "resulting complex12 / rvalue3: " << complex12 / rvalue3;
	cout << endl;
}

//Complex Class Definition
Complex::Complex() 
	: x(0), y(0){
}

Complex::Complex(double first, double second)
	: x(first), y(second) {
}

Complex::Complex(const Complex& com)
	: x(com.x), y(com.y) {
}

Complex::~Complex() {

}

Complex& Complex :: operator+=(const Complex& right)
{
	x = x + right.x;
	y = y + right.y;
	return *this;
}

Complex& Complex :: operator-=(const Complex& right)
{
	x = x - right.x;
	y = y - right.y;
	return *this;
}

Complex& Complex :: operator*=(const Complex& right)
{
	double first, second;
	first = x * right.x - y * right.y;
	second = x * right.y + right.x * y;
	x = first;
	y = second;
	return *this;
}

Complex& Complex :: operator/=(const Complex& right)
{
	double first, second, denom = right.x * right.x + right.y * right.y;
	first = (x * right.x + y * right.y) / denom;
	second = (-x * right.y + right.x * y) / denom;
	x = first;
	y = second;
	return *this;
}

const Complex operator+(const Complex& left, const Complex& right)
{
	double newX = left.x + right.x;
	double newY = left.y + right.y;
	Complex result(newX, newY);
	return result;
}

const Complex operator-(const Complex& left, const Complex& right)
{
	double newX = left.x - right.x;
	double newY = left.y - right.y;
	Complex result(newX, newY);
	return result;
}

const Complex operator*(const Complex& left, const Complex& right)
{
	double newX = left.x * right.x - left.y * right.y;
	double newY = left.x * right.y + right.x * left.y;
	Complex result(newX, newY);
	return result;
}

const Complex operator/(const Complex& left, const Complex& right)
{
	double newX = (left.x * right.x + left.y * right.y) / (right.x * right.x + right.y + right.y);;
	double newY = (-left.x * right.y + right.x * left.y) / (right.x * right.x + right.y + right.y);;
	Complex result(newX, newY);
	return result;
}

istream& operator>>(istream& left, Complex& right)
{
	cout << "Enter the value of x: ";
	left >> right.x;
	cout << "Enter the value of y: ";
	left >> right.y;
	return left;
}

ostream& operator<<(ostream& left, const Complex& right)
{
	//left <<  "("  << right.x << ") + i(" << right.y << ")" << endl;
	left << "(";
	if (right.x > 0) {
		left << "+";
	}
	left << right.x << ") + i(";
	if (right.y > 0) {
		left << "+";
	}
	left << right.y << ")" << endl;
	return left;
}

