#include <bits/stdc++.h>
using namespace std;

bool isLeapYear(int year)
{
  if (year % 400 == 0)
    return true;
  else if (year % 100 != 0 && year % 4 == 0)
    return true;
  return false;
}

int main()
{
  int year;
  cout << "Enter year: ";
  cin >> year;
  if (isLeapYear(year))
    cout << "Yes\n";
  else
    cout << "No\n";
  return 0;
}