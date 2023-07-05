#ifndef HOURLYTYPE_H
#define HOURLYTYPE_H
#include "Employee.h"
using namespace std;
class HourlyType : virtual public Employee{
public:
	virtual void Employee::print() = 0;
};
#endif