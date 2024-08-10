#include <bits/stdc++.h>
using namespace std;

float calculateNetSalary(float basicSalary, float allowances, float deductions)
{
  return basicSalary + (basicSalary * allowances / 100) - (basicSalary * deductions / 100);
}

int main()
{
  float basicSalary, allowances, deductions;
  cout << "Enter basic Allowances and Deductions\n";
  cin >> basicSalary >> allowances >> deductions;
  float netSalary = calculateNetSalary(basicSalary, allowances, deductions);
  cout << "netSalary " << netSalary << endl;
  return 0;
}