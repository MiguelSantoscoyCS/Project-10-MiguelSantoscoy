#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "CommissionEmployee.h" // CommissionEmployee class definition
using namespace std;

//Copy assignment operator.
CommissionEmployee CommissionEmployee::operator=(const CommissionEmployee& compEmp) {
	firstName = compEmp.firstName;
  lastName = compEmp.lastName;
  socialSecurityNumber=compEmp.socialSecurityNumber;\
  grossSales=compEmp.grossSales;
  commissionRate=compEmp.commissionRate;
  
	return *this;
}

// Default constructor    
CommissionEmployee::CommissionEmployee()
{
  string firstName = "no1stName";
	string lastName= "noLastName";
	string socialSecurityNumber= "-1";
	double grossSales= -1; // gross weekly sales
	double commissionRate= -1; // commission percentage
}

//User defined constructor
	CommissionEmployee::CommissionEmployee(const string& fName, const string& lName, const string& ssn, double sales, double rate)
{
  firstName = fName;
  lastName= lName;
  socialSecurityNumber=ssn;
  grossSales = sales;
  commissionRate=rate;
};

//Copy constructor
 CommissionEmployee::CommissionEmployee(CommissionEmployee& compEmp)
{
  firstName = compEmp.firstName;
  lastName = compEmp.lastName;
  socialSecurityNumber=compEmp.socialSecurityNumber;\
  grossSales=compEmp.grossSales;
  commissionRate=compEmp.commissionRate;
  
};

// Function setFirstName()
void CommissionEmployee::setFirstName(string const firstName)
{
  this->firstName = firstName;
}

// Function getFirstName()
string CommissionEmployee::getFirstName() const
{
  return firstName;
}

// Function setLastName()
void CommissionEmployee::setLastName(string const lastName)
{
  this->lastName = lastName;
}

// Function getLastName()
string CommissionEmployee::getLastName() const
{
  return lastName;
}


//Function setSocialSecurityNumber()
string CommissionEmployee::setSocialSecurityNumber(const string ssn)
{
  socialSecurityNumber = ssn;
}

//Function getSocialSecurityNumber()
string CommissionEmployee::getSocialSecurityNumber() const
{
  return socialSecurityNumber;
}

// set gross sales amount
void CommissionEmployee::setGrossSales(double sales) {
   if (sales < 0.0) {
      throw invalid_argument("Gross sales must be >= 0.0");
   }
   grossSales = sales;
}

//Function getGrossSales()
double CommissionEmployee::getGrossSales() const
{
  return grossSales;
}

// set commission rate
void CommissionEmployee::setCommissionRate(double rate) {
   if (rate <= 0.0 || rate >= 1.0) {
      throw invalid_argument("Commission rate must be > 0.0 and < 1.0");
   }

   commissionRate = rate;
}

//Function getCommissionRate()
double CommissionEmployee::getCommissionRate() const
{
  return commissionRate;
}

// calculate earnings                        
double CommissionEmployee::earnings() const {
	return commissionRate * grossSales;
}

/*void CommissionEmployee::printSal() {
	//output the contents of the pointer salary.
  cout<<
}*/

// return string representation of CommissionEmployee object        
string CommissionEmployee::toString() const {
   ostringstream output;
   output << fixed << setprecision(2); // two digits of precision   
   output << "This toString() function is from the Base class CommissionEmployee" 
	 << "\nCommission employee: " << firstName << " " << lastName
      << "\nSocial security number: " << socialSecurityNumber
      << "\nGross sales: " << grossSales
      << "\nCommission rate: " << commissionRate;
   return output.str();
}

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
