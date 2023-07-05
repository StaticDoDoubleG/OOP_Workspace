#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string>
using namespace std;
class Employee {
protected:
	string FName;
	char initial;
	string LName;
public:
	virtual void print() = 0;
};
#endif