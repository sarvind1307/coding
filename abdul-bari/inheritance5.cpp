#include<bits/stdc++.h>
using namespace std;

class Employee {
  private:
    int empId;
    string empName;
  public: 
    Employee(int id, string name) {
      empId = id;
      empName = name;
    }
    int getEmpId() {
      return empId;
    }
    string getEmpName() {
      return empName;
    }
};

class FullTimeEmployee : public Employee {
  private:
    int salary;
  public:
    FullTimeEmployee(int id, string name, int sal) : Employee(id, name) {
      salary = sal;
    }
    int getSalary() {
      return salary;
    }
};

class PartTimeEmployee : public Employee {
  private:
    int wage;
  public:
    PartTimeEmployee(int id, string name, int w) : Employee(id, name) {
      wage = w;
    }
    int getWage() {
      return wage;
    }
};

int main() {
  FullTimeEmployee fte(1, "John", 50000);
  PartTimeEmployee pte(2, "Jane", 200);
  cout << "Full Time Employee: " << fte.getEmpName() << " Salary: " << fte.getSalary() << endl;
  cout << "Part Time Employee: " << pte.getEmpName() << " Wage: " << pte.getWage() << endl;
  return 0;
}