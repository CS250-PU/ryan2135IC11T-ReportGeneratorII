# ryan2135IC11T-ReportGeneratorII

1. Implement the UML design found on Moodle starting with HourlySummaryReport.
2. The constructor for HourlySummaryReport accepts an istream reference. If the file is successfully opened, fill the vector with the employees found in the file. Remember that employees are of one of two forms:
<pre>
H Smith 123456789 22.5 40
S Jones 987654321 10000.00
</pre>
Also note, this work has been done in ReportGenerator.
3. Add a destructor that cleans up the vector of dynamically allocated memory. Again, work has been done in ReportGenerator, so what needs to be done in the destuctor of HourlySummaryReport?
4. Implememnt the pure virtual function write. This report is to output only the HourlyEmployees from the file and then compute some summary statistics for only the HourlyEmployees. In order to implement this logic, you will need to use a dynamic_cast. A dynamic_cast will allow you do determine what you are pointing to at runtime.

Follow the UML diagram found in the lecture notes on Moodle.
