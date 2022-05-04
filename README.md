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

<pre>
class StarWars {
public:
  virtual void write() = 0;
};

class Yoda : public StarWars {
public:
  virtual void write() {cout << "I'm Yoda";}
};
class ObiWan : public StarWars {
public:
  virtual void write() {cout << "I'm Obi-Wan Kenobi";}
};

int main() {
  StarWars *pcStarWars = new Yoda;
  
  if (dynamic_cast&lt;Yoda *&gt; (pcStarWars) != nullptr) {
      cout << "I point to a Yoda object" << endl;
  }
  else if (dynamic_cast&lt;ObiWan *&gt; (pcStarWars) != nullptr) {
      cout << "I point to an ObiWan object" << endl;
  }
  else {
      cout << "I don't point to an object" << endl;
  }
}
</pre>

Final output for the given data file is to be:

<pre>
Hourly Employee Report

Name: Jill SSN: 123456789 Wage: 15 HoursWorked: 100 Pay: 1500

Name: John SSN: 234567890 Wage: 17.5 HoursWorked: 135 Pay: 2362.5

Name: Dee SSN: 456789012 Wage: 13.5 HoursWorked: 50 Pay: 675

Hourly Employee Summary Statistics
Total Hourly Pay: $4537.50
Highest Hourly Pay: $2362.50
Lowest Hourly Pay: $675.00
</pre>
Follow the UML diagram found in the lecture notes on Moodle.
