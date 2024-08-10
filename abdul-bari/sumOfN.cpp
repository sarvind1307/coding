#include <bits/stdc++.h>
using namespace std;

void sumOfN()
{
  float n, sum;
  cout << "Enter N: ";
  cin >> n;
  sum = (n * (n + 1)) / 2;
  cout << "Sum of N is: " << sum << endl;
}

int main()
{
  sumOfN();
  return 0;
}