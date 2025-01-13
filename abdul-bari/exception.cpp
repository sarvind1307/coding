#include <bits/stdc++.h>
using namespace std;

int division(int x, int y)
{
  if (y == 0)
  {
    throw y;
  }
  return x / y;
}

int main()
{
  int x = 10, y = 0, z;
  try
  {
    z = division(x, y);
    cout << z << endl;
  }
  catch (int e)
  {
    cout << "Error: Division by " << e << endl;
  }
  return 0;
}