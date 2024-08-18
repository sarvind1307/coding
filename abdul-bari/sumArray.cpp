#include <bits/stdc++.h>
using namespace std;

int sumArray()
{
  int A[5] = {1, 2, 3, 4, 5};
  int sum = 0;
  for (int x : A)
  {
    sum += x;
  }
  return sum;
}

int main()
{
  
  cout << sumArray() << endl;
  return 0;
}