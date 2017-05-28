#include "OfficeEmployee.h"
#include <iostream>
#include <string>

using namespace std;

OfficeEmployee::OfficeEmployee() {
	basedSalary = 0;
}

double OfficeEmployee::getBasedSalary() {
	return basedSalary;
}
		
void OfficeEmployee::setBasedSalary(double basedSalary) {
	this->basedSalary = basedSalary;
}

double OfficeEmployee::computeSalaryMustPaidForEmployee() {
	return basedSalary * 2.5;
}

ostream& operator<<(ostream& os, OfficeEmployee employee) {
	employee.outputEmployee();
	os<<"\tBased Salary: " << employee.getBasedSalary()<<endl;
	os<<"\tSalary: " << employee.getSalary()<<endl;
	return os;
} 

istream& operator>>(istream& is, OfficeEmployee& employee) {
	employee.inputEmployee();
	cout<<"Input based salary: ";
	double basedSalary;
	is>>basedSalary;
	employee.setBasedSalary(basedSalary);
	employee.setSalary(employee.computeSalaryMustPaidForEmployee());
} 
