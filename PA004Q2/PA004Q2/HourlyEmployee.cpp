#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee(string f, char i, string l, int h, double fr)
	:hour(h), fixedRate(fr)
{
	FName = f;
	initial = i;
	LName = l;
}

HourlyEmployee::~HourlyEmployee()
{
}

void HourlyEmployee::print()
{
	cout << fixed;
	cout.precision(0);
	cout << FName << " " << initial << ". " << LName << endl;
	cout << "Hourly Employee" << endl;
	cout << "Hours worked: " << hour << endl;
	cout << "Rate: " << fixedRate << endl;
	cout << "Payment: " << hour * fixedRate << endl;
	cout << "\n";
}
