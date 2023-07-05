#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee(string f, char i, string l, int h, double fr)
{
	FName = f;
	initial = i;
	LName = l;
	hour = h;
	fixedRate = fr;
}

HourlyEmployee::~HourlyEmployee()
{
}

void HourlyEmployee::Employee::print()
{
	cout << fixed;
	cout.precision(0);
	cout << "Hourly Employee:" << endl;
	cout << FName << " " << initial << ". " << LName << endl;
	cout << "Hours worked: " << HourlyType::hour << endl;
	cout << "Rate: " << fixedRate << endl;
	cout << "Payment: " << hour * fixedRate << endl;
	cout << "\n";
}
