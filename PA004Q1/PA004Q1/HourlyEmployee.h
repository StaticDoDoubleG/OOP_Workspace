#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H
#include "Employee.h"
class HourlyEmployee : public Employee{
protected:
	int hour; //Hours worked per month
	double fixedRate; //Fixed Rate per hour

public:
	HourlyEmployee(string f, char i, string l, int h, double fr);
	~HourlyEmployee();
	void print();
};
#endif
