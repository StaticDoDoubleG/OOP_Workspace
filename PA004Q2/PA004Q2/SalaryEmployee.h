#ifndef SALARYEMPLOYEE_H
#define SALARYEMPLOYEE_H
#include "SalaryType.h"
class SalaryEmployee : virtual public SalaryType{
protected:
	double fixedSalary; //Fixed Salary per month
public:
	SalaryEmployee(string f, char i, string l, double fs);
	~SalaryEmployee();
	void Employee::print();
};
#endif

