#ifndef SALARYHOURLYEMPLOYEE_H
#define SALARYHOURLYEMPLOYEE_H
//#include "SalaryType.h"
//#include "HourlyType.h"
#include "Employee.h"

class SalaryHourlyEmployee : virtual public Employee{
protected:
	double fixedSalary; //Fixed Salary per month
	int hour; //Hours worked per month
	double fixedRate; //Fixed Rate per hour
public:
	SalaryHourlyEmployee(string f, char i, string l, double s,int h, double fr);
	~SalaryHourlyEmployee();
	void Employee::print();
};
#endif