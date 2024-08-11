#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a = 10, b = 5, i = 5;

  if (a < b && ++i <= b)
  {
    // i wont increment..short circuit
  }
  cout << i << endl;

  if (a > b || ++i <= b)
  {
    // i wont increment..short circuit
  }
  cout << i << endl;

  return 0;
}