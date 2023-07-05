#include "salaryEmployee.h"
#include "hourlyEmployee.h"
#include "salaryHourlyEmployee.h"
int main()
{
	// Handling a salary employee (first name, initial, last name, salary)
	SalaryEmployee john("John", 'A', "Pape", 2500);
	john.print();
	// Handling an hourly employee (first name, initial, last name, hours, rate)
	HourlyEmployee lucie("Lucie", 'C', "Bush", 70, 20.0);
	lucie.print();
	// Handling a salary-hourly employee (first name, initial, last name, salary, hours, rate)
	SalaryHourlyEmployee ann("Ann", 'A', "White", 3500, 230, 20.0);
	ann.print();
	// Add your test code here:
	SalaryEmployee chris("Chris", 'P', "Bacon", 1000);
	chris.print();

	HourlyEmployee aunt("Aunt", 'T', "Annes", 170, 5.0);
	aunt.print();
	
	SalaryHourlyEmployee k("Kay", 'F', "Cie", 500, 720, 10.0);
	k.print();

	return 0;
}