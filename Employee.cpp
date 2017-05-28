#include "Employee.h"

Employee::Employee()
{
}

Employee::~Employee()
{
}

string Employee::getName() {
	return this->name;
}

void Employee::setName(string name) {
	this->name = name;
}
		
Date Employee::getBirthDate() {
	return this->birthDate;
}

void Employee::setBirthDate(Date birthDate) {
	this->birthDate = birthDate;
}
		
double Employee::getSalary() {
	return salary;
}

void Employee::setSalary(double salary) {
	this->salary = salary;
}
		
ostream& operator<<(ostream& os, Employee employee) {
	os<<"Employee information: \n\tName: " << employee.getName()<<endl;
	os<<"\tBirthDate: " << employee.getBirthDate()<<endl;
//	os<<"\tSalary: " << employee.getSalary()<<endl;
	return os;
}
		
istream& operator>>(istream& is, Employee& employee) {
	string name;
	Date birthDate;
	cout<<"Input name: ";
	is.sync();
	getline(is, name);
	is.sync();
	cout<<"Input birthdate: "<<endl;
	is>>birthDate;
	employee.setName(name);
	employee.setBirthDate(birthDate);
	return is;
}

void Employee::outputEmployee() {
	cout<<"Employee information: \n\tName: " << this->name<<endl;
	cout<<"\tBirthDate: " << this->birthDate<<endl;
}

void Employee::inputEmployee() {
	cout<<"Input name: ";
	cin.sync();
	getline(cin, this->name);
	cin.sync();
	cout<<"Input birthdate: "<<endl;
	cin>>this->birthDate;
}
