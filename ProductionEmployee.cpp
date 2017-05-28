#include "ProductionEmployee.h"

ProductionEmployee::ProductionEmployee()
{
	numberOfProduct = 0;
}

ProductionEmployee::~ProductionEmployee()
{
}

int ProductionEmployee::getNumberOfProduct() {
	return numberOfProduct;
}

void ProductionEmployee::setNumberOfProduct(int numberOfProduct) {
	this->numberOfProduct = numberOfProduct;
}
		
double ProductionEmployee::computeSalaryMustPaidForEmployee() {
	return numberOfProduct * 5000;
}

ostream& operator<<(ostream& os, ProductionEmployee employee) {
	employee.outputEmployee();
	os<<"\tNumber of product: " << employee.getNumberOfProduct() <<endl;
	os<<"\tSalary: " << employee.getSalary()<<endl;
	return os;
}
		
istream& operator>>(istream& is, ProductionEmployee& employee) {
	employee.inputEmployee();
	cout<<"Input number of product: ";
	int numberOfProduct;
	is>>numberOfProduct;
	employee.setNumberOfProduct(numberOfProduct);
	employee.setSalary(employee.computeSalaryMustPaidForEmployee());
}
