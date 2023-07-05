#include "SalaryEmployee.h"
#include "HourlyEmployee.h"

int main() {
	// Instantiation of Employee1 (first name, initial, last name, salary)
	SalaryEmployee employee1("John", 'A', "Pape", 2500);
	employee1.print();
	// Instantiation of Employee2 (first name, initial, last name, hours, rate)
	HourlyEmployee employee2("Lucie", 'C', "Bush", 70, 20.0);
	employee2.print();
	// Add your test code here:
	SalaryEmployee employee3("Sean", 'P', "Storey", 4500);
	employee3.print();
	HourlyEmployee employee4("Phillip", 'C', "McGraw", 60, 100.0);
	employee4.print();



	return 0;
}