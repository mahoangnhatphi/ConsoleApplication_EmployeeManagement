#ifndef PRODUCTIONEMPLOYEE_H
#define PRODUCTIONEMPLOYEE_H

#include "Employee.h"

class ProductionEmployee : public Employee
{
	private:
		int numberOfProduct;
	public:
		ProductionEmployee();
		~ProductionEmployee();
		int getNumberOfProduct();
		void setNumberOfProduct(int numberOfProduct);
		double computeSalaryMustPaidForEmployee();
		friend ostream& operator<<(ostream& os, ProductionEmployee employee);
		friend istream& operator>>(istream& is, ProductionEmployee& employee);
	protected:
};

#endif
