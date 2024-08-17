#include <bits/stdc++.h>
using namespace std;

void displayDigits(int num)
{
  while (num > 0)
  {
    cout << num % 10 << " ";
    num = num / 10;
  }
  cout << endl;
}

int main()
{
  int num;
  cout << "Enter Number=>";
  cin >> num;
  displayDigits(num);
  return 0;
}