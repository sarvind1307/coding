#include <bits/stdc++.h>
using namespace std;

int andOpr(int a, int b)
{
  return a & b;
}

int orOpr(int a, int b)
{
  return a | b;
}

int xorOpr(int a, int b)
{
  return a ^ b;
}

int leftShift(int c, int by) { return c << by; }
int rightShift(int c, int by) { return c >> by; }
int norOpr(int x) { return ~x; }
int main()
{
  int x = 11, y = 7, z;
  z = andOpr(x, y);
  cout << "Z = " << z << endl;
  z = orOpr(x, y);
  cout << "Z = " << z << endl;
  z = xorOpr(x, y);
  cout << "Z = " << z << endl;

  char c = 20, d;
  d = leftShift(c, 1);
  cout << "D = " << (int)d << endl;
  d = rightShift(c, 1);
  cout << "D = " << (int)d << endl;
  d = norOpr(c);
  cout << "D = " << (int)d << endl;
}