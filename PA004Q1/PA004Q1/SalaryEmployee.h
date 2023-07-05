#ifndef SALARYEMPLOYEE_H
#define SALARYEMPLOYEE_H
#include "Employee.h"
class SalaryEmployee : public Employee{
protected:
	double fixedSalary; //Fixed Salary per month
public:
	SalaryEmployee(string f, char i, string l, double fs);
	~SalaryEmployee();
	void print();
};
#endif

