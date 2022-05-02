#include <iostream>
#include <fstream>
#include "Employee.h"
#include "HourlyEmployee.h"
#include "SalariedEmployee.h"
#include "ReportGenerator.h"

//**********************************************************************
// Function:    main
//
// Description:	A ReportGenerator generates report information for
//              both Salaried and Hourly employees. This generator uses:
//              1. Polymorphism
//              2. Dynamic memory
//              3. Constructor/Destructor for allocating/deallocating
//                  memory
//              4. vector<Employee *>
//
// Parameters:	none
//
// Returned:		exit status
//**********************************************************************

int main () {
  const std::string EMPLOYEES_FILE_NAME = "Employees.txt";
  std::ifstream inFile;

  inFile.open (EMPLOYEES_FILE_NAME);
  if (inFile.fail ()) {
    std::cout << "Error opening file: " << EMPLOYEES_FILE_NAME
      << std::endl << std::endl;
    exit (EXIT_FAILURE);
  }

  inFile.close ();

  return EXIT_SUCCESS;
}