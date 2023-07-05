#include "SalaryEmployee.h"

SalaryEmployee::SalaryEmployee(string f, char i, string l, double fs)
	:fixedSalary(fs)
{
	FName = f;
	initial = i;
	LName = l;
}

SalaryEmployee::~SalaryEmployee()
{
}

void SalaryEmployee::print()
{
	cout << fixed;
	cout.precision(0);
	cout << FName << " " << initial << ". " << LName << endl;
	cout << "Salary Employee" << endl;
	cout << "Salary: " << fixedSalary << endl;
	cout << "Total Payment: " << fixedSalary << endl;
	cout << "\n";
}
