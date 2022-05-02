#pragma once

#include <vector>
#include <string>
#include "Employee.h"

class ReportGenerator {
public:
	enum class Employee_Type : char {
		HOURLY_EMPLOYEE = 'H',
		SALARIED_EMOLOYEE = 'S'
	};

	ReportGenerator (std::istream &rcInFile);
	virtual ~ReportGenerator ();
	size_t size () const;
	virtual void write (std::ostream &rcOutFile) const = 0;

protected:
	std::vector<Employee *> mcEmployees;
};