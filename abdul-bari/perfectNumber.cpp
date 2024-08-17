#include <bits/stdc++.h>
using namespace std;

void perfectNumber(int num)
{
  int sum = 0;
  for (int i = 1; i <= num; i++)
  {
    if (num % i == 0)
    {
      sum += i;
    }
  }
  cout << "SUM = " << sum << endl;
  cout << "2x" << num << "=" << 2 * num << endl;
  if (sum == 2 * num) {
    cout << "Perfect Number" << endl;
  } else {
    cout << "Not a Perfect Number" << endl;
  }
}

int main()
{
  int num;
  cout << "Enter Num: ";
  cin >> num;
  perfectNumber(num);

  // for (int i = 1; i <= 10; i++) {
  //   perfectNumber(i);
  // }
  return 0;
}