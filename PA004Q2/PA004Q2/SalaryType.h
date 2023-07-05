#ifndef SALARYTYPE_H
#define SALARYTYPE_H
#include "Employee.h"
using namespace std;
class SalaryType : virtual public Employee{
public:
	virtual void Employee::print() = 0;
};
#endif