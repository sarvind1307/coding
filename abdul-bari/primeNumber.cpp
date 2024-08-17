#include <bits/stdc++.h>
using namespace std;

void isPrime(int num)
{
  int count = 0;
  for (int i = 1; i <= num; i++)
  {
    if (num % i == 0)
    {
      count++;
    }
  }
  if (count == 2) {
    cout << "Prime" << endl;
  } else {
    cout << "Not Prime" << endl;
  }
}

int main()
{
  int num;
  cout << "Enter Num: ";
  cin >> num;
  isPrime(num);
  return 0;
}