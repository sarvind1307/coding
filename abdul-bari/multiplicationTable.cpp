#include <bits/stdc++.h>
using namespace std;

void multiplicationTable(int num)
{
  cout << "Table of " << num << endl;
  for (int i = 1; i <= 10; i++)
  {
    cout << num << " X " << i << " =  " << num * i << endl;
  }
}

int main()
{
  int num;
  cout << "Table for: ";
  cin >> num;
  multiplicationTable(num);
  return 0;
}