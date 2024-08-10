#include <bits/stdc++.h>
using namespace std;

void rootsOfEqnuation()
{
  float a, b, c, root1, root2, sqroot;
  cout << "Enter Ax^2 + Bx = C\n";
  cin >> a >> b >> c;
  sqroot = sqrt(b * b - (4 * a * c));
  root1 = (-b + sqroot) / (2 * a);
  root2 = (-b - sqroot) / (2 * a);
  cout << "The roots are: " << root1 << " and " << root2 << endl;
}

int main()
{
  rootsOfEqnuation();
  return 0;
}