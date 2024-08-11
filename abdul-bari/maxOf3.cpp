#include <bits/stdc++.h>
using namespace std;

int maxof3(int a, int b, int c)
{
  if (a > b && a > c)
  {
    return a;
  }
  else if (b > c)
  {
    return b;
  }
  else
  {
    return c;
  }
}

int main()
{
  int a, b, c;
  cout << "Enter 3 nos: \n";
  cin >> a >> b >> c;
  cout << maxof3(a, b, c) << endl;
  return 0;
}