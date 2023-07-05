#include "SalaryEmployee.h"

SalaryEmployee::SalaryEmployee(string f, char i, string l, double fs)
{
	FName = f;
	initial = i;
	LName = l;
	fixedSalary = fs;
}

SalaryEmployee::~SalaryEmployee()
{
}

void SalaryEmployee::print()
{
	cout << fixed;
	cout.precision(0);
	cout << "Salary Employee:" << endl;
	cout << FName << " " << initial << ". " << LName << endl;
	cout << "Salary: " << fixedSalary << endl;
	cout << "Payment: " << fixedSalary << endl;
	cout << "\n";
}
