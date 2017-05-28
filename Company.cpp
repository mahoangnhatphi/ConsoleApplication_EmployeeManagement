#include "Company.h"

Company::Company()
{
	name = "Unknown Company";
}

Company::Company(string name)
{
	this->name = name;
}

Company::~Company()
{
}

string Company::getName() {
	return name;
}

void Company::addOfficeEmployee() {
	cout<<"Add new office employee: \n";
	OfficeEmployee officeEmployee;
	cin>>officeEmployee;
	this->officeEmployeeList.push_back(officeEmployee);
}

void Company::addProductionEmployee() {
	cout<<"Add new production employee: \n";
	ProductionEmployee employee;
	cin>>employee;
	this->productionEmployeeList.push_back(employee);
}

void Company::printAllOfficeEmployee() {
	cout<<"Office Employee List of "<< name << ": \n";
	for (int i = 0; i < this->officeEmployeeList.size(); i++)
		cout<<i + 1<<" - "<<officeEmployeeList[i]<<endl;
}

void Company::printAllProductionEmployee() {
	cout<<"Office Production List of "<< name << ": \n";
	for (int i = 0; i < this->productionEmployeeList.size(); i++)
		cout<<i + 1<<" - "<<productionEmployeeList[i]<<endl;
}

double Company::computeTotalSalaryMustPaidForOfficeEmployee() {
	double total = 0;
	Employee *p;
	for (int i = 0; i < this->officeEmployeeList.size(); i++) {
		p = &officeEmployeeList.at(i);
		total+= p->computeSalaryMustPaidForEmployee();
	}
	return total;
}
double Company::computeTotalSalaryMustPaidForProductionEmployee() {
	double total = 0;
	Employee *p;
	for (int i = 0; i < this->productionEmployeeList.size(); i++) {
		p = &productionEmployeeList.at(i);
		total+= p->computeSalaryMustPaidForEmployee();
	}
	return total;		
}
		
double Company::computeTotalSalaryMustPaidForAllEmployee() {
	return computeTotalSalaryMustPaidForOfficeEmployee() + computeTotalSalaryMustPaidForProductionEmployee();
}
