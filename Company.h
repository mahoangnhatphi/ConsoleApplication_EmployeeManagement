#ifndef COMPANY_H
#define COMPANY_H
#include "OfficeEmployee.h"
#include "ProductionEmployee.h"
#include <vector>
class Company
{
	private:
		string name;
		vector<OfficeEmployee> officeEmployeeList;
		vector<ProductionEmployee> productionEmployeeList;
	public:
		Company();
		Company(string name);
		~Company();
		string getName();
		void addOfficeEmployee();
		void addProductionEmployee();
		void printAllOfficeEmployee();
		void printAllProductionEmployee();
		double computeTotalSalaryMustPaidForOfficeEmployee();
		double computeTotalSalaryMustPaidForProductionEmployee();
		double computeTotalSalaryMustPaidForAllEmployee();
	protected:
};

#endif
