#include "SalaryHourlyEmployee.h"

SalaryHourlyEmployee::SalaryHourlyEmployee(string f, char i, string l, double s, int h, double fr)
	:fixedSalary(s), hour(h), fixedRate(fr)
{
	FName = f;
	initial = i;
	LName = l;
}

SalaryHourlyEmployee::~SalaryHourlyEmployee()
{
}

void SalaryHourlyEmployee::print()
{
	cout << fixed;
	cout.precision(0);
	cout << FName << " " << initial << ". " << LName << endl;
	cout << "Salary Hourly Employee" << endl;
	cout << "Salary: " << fixedSalary << endl;
	cout << "Hours worked: " << hour << endl;
	cout << "Rate: " << fixedRate << endl;
	cout << "Total Payment: ";
	if (hour > 180) {
		cout << fixedSalary + (hour - 180) * fixedRate << endl;
	}
	else {
		cout << fixedSalary << endl;
	}
	cout << "\n";
}
