//Comment out any include directive IF you don't need it.
//  Replace the include directives below with your include directives.
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include "CommissionEmployee.h" // CommissionEmployee class definition
//#include "CommissionEmployee.cpp" // CommissionEmployee class functions definition
#include "BasePlusCommissionEmployee.h"
//#include "BasePlusCommissionEmployee.cpp"
#include "BasePlusCommissionEmployee2.h"
//#include "BasePlusCommissionEmployee2.cpp"

using namespace std;

int main() {
	// instantiate a CommissionEmployee object     
	CommissionEmployee employee{ "Soon", "Sue", "222-22-2222", 10000, 0.06 }, employee3;
	BasePlusCommissionEmployee emplBase{ "Jimmy", "Cain", "000-00-0000", 20000, 0.06, 1000 };
	BasePlusCommissionEmployee2 emplBase2{ "Mark", "Rae", "999-99-9999", 20000, 0.06, 1000 };

	BasePlusCommissionEmployee *empl = &emplBase;
	

	// get commission employee data
	cout << fixed << setprecision(2); // set floating-point formatting
	cout << "Employee information obtained by get functions: \n"
		<< "\nFirst name is " << employee.getFirstName()
		<< "\nLast name is " << employee.getLastName()
		<< "\nSocial security number is "
		<< employee.getSocialSecurityNumber()
		<< "\nGross sales is " << employee.getGrossSales()
		<< "\nCommission rate is " << employee.getCommissionRate() << endl;

	employee.setGrossSales(8000); // set gross sales      
	employee.setCommissionRate(.10); // set commission rate

	cout << "\nUpdated employee information from function toString: \n\n"
		<< employee.toString();

	//Reset the data in emplBase.

  /*
	empl->setFirstName("King");
	empl->setLastName("Kong");
	empl->setBaseSalary(50000);
	empl->setCommissionRate(0.8);
	empl->setSocialSecurityNumber("111-11-1111");
*/
                              
	// display the employee's earnings
	cout << "\n\nEmployee's earnings: $" << employee.earnings() << endl;

	cout << setw(55) << "\n*******************************************************" << endl;
	cout << "Using inheritance from BasePlusCommissionEmployee: \n" << endl;
	cout << "The Base Salary of " << emplBase.getLastName() << " " << emplBase.getFirstName() << " is: "
		<< emplBase.getCommissionRate() * emplBase.getGrossSales() + emplBase.getBaseSalary() << endl;

	cout << "Attempt to access BasePlusCOmmission fuunction using BaseEmloytee object: " <<
		employee.earnings() << " and BasePlusCOmmission object : " << emplBase.earnings() << endl;

	cout << "\n\nUsing 2 layer deep inheritance: " << endl;
	cout << "Gross Sales: " << emplBase2.toString() << endl;
	cout << "Eranings: " << emplBase2.getBaseSalary() << " + " << emplBase2.getCommissionRate() << " * "
		<< emplBase2.getGrossSales() << " = " << emplBase2.earnings() << endl;

	//testing Copy Constructor.
	CommissionEmployee employee2 = employee;
	cout << "TESTING COPY CONSTRUCTOR: " << employee2.getGrossSales() << " and " << employee2.getCommissionRate() << endl;;

	//Testing Copy assignment operator.
employee3 = employee;
cout << "Testing Copy assignment operator: employee3 = employee\n";
cout << employee3.getFirstName() << endl;

	cout << "\n\n";
}

