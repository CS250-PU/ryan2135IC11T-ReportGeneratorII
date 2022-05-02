#include <vector>
#include <string>
#include <fstream>
#include "Employee.h"
#include "HourlyEmployee.h"
#include "SalariedEmployee.h"
#include "ReportGenerator.h"


ReportGenerator::ReportGenerator (std::istream &rcInFile) {
	char employeeType;
	HourlyEmployee cHourlyEmployee;
	SalariedEmployee cSalariedEmployee;

	while (rcInFile >> employeeType) {
		if (Employee_Type::HOURLY_EMPLOYEE ==
			static_cast<Employee_Type> (employeeType)) {
			cHourlyEmployee.read (rcInFile);
			mcEmployees.push_back (new HourlyEmployee (cHourlyEmployee));
		}
		else if (Employee_Type::SALARIED_EMOLOYEE ==
			static_cast<Employee_Type> (employeeType)) {
			cSalariedEmployee.read (rcInFile);
			mcEmployees.push_back (new SalariedEmployee (cSalariedEmployee));
		}
	}
}

ReportGenerator::~ReportGenerator () {
	for (const auto pcEmployee : mcEmployees) {
		delete pcEmployee;
	}
	mcEmployees.clear ();
}

size_t ReportGenerator::size () const {
	return mcEmployees.size ();
}