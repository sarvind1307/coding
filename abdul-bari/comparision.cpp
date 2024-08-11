#include <bits/stdc++.h>
using namespace std;

int maxOf2(int x, int y)
{
  if (x <= y)
    return y;
  else
    return x;
}

int minOf2(int x, int y)
{
  if (x >= y)
    return y;
  else
    return x;
}

int main()
{
  int x, y, z;
  cout << "Enter 2 nos:";
  cin >> x >> y;
  z = maxOf2(x, y); // Keep this declaration
  cout << "Max of two numbers is: " << z << endl;
  z = minOf2(x, y);
  cout << "Min of two numbers is: " << z << endl;
  return 0;
}
