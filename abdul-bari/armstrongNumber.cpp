#include <bits/stdc++.h>
using namespace std;

void armstrongNumber(int num)
{
  int sum = 0;
  int originalNum = num;
  while (num > 0)
  {
    int digit = num % 10;
    sum += digit * digit * digit;
    num = num / 10;
  }
  if (sum == originalNum)
  {
    cout << originalNum << " is an Armstrong number.\n";
  }
  else
  {
    cout << originalNum << " is not an Armstrong number.\n";
  }
}

int main()
{
  int num;
  cout << "Enter Number=>";
  cin >> num;
  armstrongNumber(num);
  return 0;
}