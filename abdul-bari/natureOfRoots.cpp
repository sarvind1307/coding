#include <bits/stdc++.h>
using namespace std;

void natureOfRoots()
{
  int a, b, c, discriminant;
  cout << "Enter Ax^2+Bx+C:\n";
  cin >> a >> b >> c;
  discriminant = b * b - 4 * a * c;
  if (discriminant < 0)
  {
    cout << "No real roots" << endl;
  }
  else if (discriminant == 0)
  {
    cout << "One real root" << endl;
  }
  else
  {
    cout << "Two real roots" << endl;
  }
}

int main()
{
  natureOfRoots();
  return 0;
}