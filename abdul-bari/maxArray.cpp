#include <bits/stdc++.h>
using namespace std;

void maxArray()
{
  int A[] = {9, 8, 2, 3, 5, 6, 9, 2, 8, 3, 5, 6, 132, 2, 9, 3, 8, 5, 0};
  int max = A[0];
  for (int x : A)
  {
    if (x > max)
      max = x;
  }
  cout << "Max: " << max << endl;
}

int main()
{
  maxArray();
  return 0;
}