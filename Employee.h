#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "Date.h"
class Employee
{
	private:
		string name;
		Date birthDate;
		double salary;
	public:
		Employee();
		~Employee();
		string getName();
		void setName(string name);
		Date getBirthDate();
		void setBirthDate(Date birthDate);
		double getSalary();
		void setSalary(double salary);
		friend ostream& operator<<(ostream& os, Employee employee);
		friend istream& operator>>(istream& is, Employee& employee);
		void outputEmployee();
		void inputEmployee();
		virtual double computeSalaryMustPaidForEmployee() {
			return 0;
		}
	protected:
};

#endif
