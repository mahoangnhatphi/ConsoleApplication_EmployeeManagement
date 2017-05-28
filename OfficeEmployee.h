#ifndef OFFICEEMPLOYEE_H
#define OFFICEEMPLOYEE_H

#include "Employee.h"

class OfficeEmployee : public Employee
{
	private:
		double basedSalary;
	public:
		OfficeEmployee();
		double getBasedSalary();
		void setBasedSalary(double basedSalary);
		double computeSalaryMustPaidForEmployee();
		friend ostream& operator<<(ostream& os, OfficeEmployee employee);
		friend istream& operator>>(istream& is, OfficeEmployee& employee);
	protected:
};

#endif
