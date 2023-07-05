#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H
#include "HourlyType.h"
class HourlyEmployee : virtual public HourlyType{
protected:
	int hour; //Hours worked per month
	double fixedRate; //Fixed Rate per hour
public:
	HourlyEmployee(string f, char i, string l, int h, double fr);
	~HourlyEmployee();
	void Employee::print();
};
#endif
