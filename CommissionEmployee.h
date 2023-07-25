//Project 9:
//   Create a class UML from these files: CommissionEmployee.h, 
//CommissionEmployee.cpp, BasePlusCommissionEmployee.h, 
//BasePlusCommissionEmployee.cpp, BasePlusCommissionEmployee2.h,
//BasePlusCommissionEmployee2.cpp.
//
//   Create a destructor for each of these classes: 
//			CommissionEmployee,
//			BasePlusCommissionEmployee,
//			BasePlusCommissionEmployee2
//   Each destructo would print a message informing the user
//that the destructor is called for the proper class.
//		ex: "Calling the destructor of CommissionEmployee\n"
//   For the desctructor of ~CommissionEmployee() class, besides
//displaying the above message, set the pointer salary to 
//null pointer and then delete it. 
//
//   In the class CommissionEmployee, create a private pointer of 
//type double called 'salary'.
//   In the class CommissionEmployee, create a copy assignment operator
//(called compEmp) with a constant referenced object of the class 
//CommissionEmployee as its parameter.
//      In this copy assignment operator, set up the followings:
//		 - the pointer salary to be a new dynamic array with 2 elements:
//		     - set the 1st element equals to the privare member grossSales.
//		     - set the 2nd element equals to the privare member commissionRate.
//		 - set all private members equal to the values of the private members
//of the object compEmp.
//   
//   In the base class CommissionEmployee, create a copy constructor with a
//constant referenced object of the class CommissionEmployee, call it compEmp.
//      In this copy constructor, set all privat emembers equal to the 
//corresponding values of the parameter compEmp.
//

#ifndef COMMISSION_H
#define COMMISSION_H

#include <string> // C++ standard string class
#include <cstdlib>
#include <iostream>

using namespace std;
class CommissionEmployee {
public:
	//Copy assisagnment operator.
	CommissionEmployee operator=(const CommissionEmployee&);

	//Default constructor
  CommissionEmployee();

	//User defined constructor.
CommissionEmployee(const std::string& fName, const std::string& lName, const std::string& ssn, double sales, double rate);
	//Copy constructor.
  CommissionEmployee(CommissionEmployee& compEmp);

	//User defined Desctructor.
	~CommissionEmployee() {
		std::cout << "Calling Destructor from the class CommissionEmployee\n";
};

	//A void function setFirstName() with a constant referenced string parameter.
	//This function set a person first name.
void setFirstName(string const firstName);

	//A function of type string getFirstName() const, which returns
	//a person first name.	
string getFirstName() const;

	//A void function setLastName() with a constant referenced string parameter.
	//This function set a person last name.
void setLastName(string const lastName);

	//A function of type string getLastName() const, which returns
	//a person last name.	
string getLastName() const;

	//A function of type string setSocialSecurityNumber() with a constant referenced
	//string parameter. This function sets a person SSN.

string setSocialSecurityNumber(const string ssn);

	//A function of type string getSocialSecurityNumber() const, which returns
	//a person SSN.	
string getSocialSecurityNumber() const;

	void setGrossSales(double); // set gross sales amount
	double getGrossSales() const; // return gross sales amount

	void setCommissionRate(double); // set commission rate (percentage)
	double getCommissionRate() const; // return commission rate

	double earnings() const; // calculate earnings
	std::string toString() const; // create string representation

	void printSal();

protected:
	std::string firstName;
	std::string lastName;
	std::string socialSecurityNumber;
	double grossSales; // gross weekly sales
	double commissionRate; // commission percentage
	
};

#endif



/**************************************************************************
 * (C) Copyright 1992-2017 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
