#include <bits/stdc++.h>
using namespace std;

int factorial(int num)
{
  int fact = 1;
  for (int i = 1; i <= num; i++)
  {
    fact *= i;
  }
  return fact;
}

int main()
{
  int num, fact;
  cout << "Enter Num: ";
  cin >> num;
  fact = factorial(num);
  cout << "Factorial: " << fact << endl;
  // for (int i = 1; i <= 10; i++) {
  //   fact = factorial(i);
  //   cout << "Factorial: " << fact << endl;
  // }
  return 0;
}