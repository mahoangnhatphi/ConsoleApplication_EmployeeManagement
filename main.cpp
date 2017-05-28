#include "Company.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include <iomanip>

void menu(Company &company) {
	string msg = "1. Add new office employee\n2. Add new produced employee\n3. Print information of office employee\n4. Print information of produced employee\n5. Show total salary must be paid for office employee\n6. Show total salary must be paid for produced employee\n7. Show total salary must be paid for all employee\n0. Exit\nYour choice: ";
	int choice;
	do {
		cout<<msg;
		cin>>choice;
		switch(choice) {
			case 1:
				company.addOfficeEmployee();
				break;
			case 2:
				company.addProductionEmployee();
				break;
			case 3:
				company.printAllOfficeEmployee();
				break;
			case 4:
				company.printAllProductionEmployee();
				break;
			case 5:
				cout<<company.getName() << " must be paid " << company.computeTotalSalaryMustPaidForOfficeEmployee() << " for office employees"<<endl;		
				break;
			case 6:
				cout<<company.getName() << " must be paid " << company.computeTotalSalaryMustPaidForProductionEmployee() << " for produced employees"<<endl;		
				break;
			case 7:
				cout<<company.getName() << " must be paid " << company.computeTotalSalaryMustPaidForAllEmployee() << " for all employees"<<endl;		
				break;
			case 0:
				cout<<"Have a nice day!";
		}
		cout<<endl;
	} while (choice != 0);
}

int main(int argc, char** argv) {
	cout << setprecision(20);
	string name;
	cout<<"What\'s your company\'s name? ";
	getline(cin, name);
	Company company(name);
	menu(company);
	return 0;
}
