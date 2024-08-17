#include <bits/stdc++.h>
using namespace std;

void gcdOf2Num(int x, int y)
{
  while (x != y)
  {
    if (x < y)
    {
      y -= x;
    }
    else if (x > y)
    {
      x -= y;
    }
  }
  cout << "GCD is: "<< x << endl;
}

int main()
{
  int x, y;
  cout << "Enter Numbers=> ";
  cin >> x >> y;
  gcdOf2Num(x, y);
  return 0;
}