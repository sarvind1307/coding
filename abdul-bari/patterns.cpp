#include <bits/stdc++.h>
using namespace std;

void pattern1()
{
  cout <<"Pattern 1:" << endl;
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cout << (j + 1) + 4 * i << " ";
    }
    cout << endl;
  }
}

void pattern2() {
  cout << "Pattern 2:" << endl;
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      if (i >= j) {
        cout << "*";
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }
}

void pattern3()
{
  cout << "Pattern 3:" << endl;
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      if (i <= j)
      {
        cout << "*";
      }
      else
      {
        cout << " ";
      }
    }
    cout << endl;
  }
}

void pattern4()
{
  cout << "Pattern 4:" << endl;
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      if (i + j >= 4-1) {
        cout << "*";
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }
}

int main()
{
  pattern1();
  pattern2();
  pattern3();
  pattern4();
  return 0;
}