#include <bits/stdc++.h>
using namespace std;

// Pass by value
void swapPV(int a, int b)
{
  cout << "Before Swap: " << a << " " << b << endl;
  int temp = a;
  a = b;
  b = temp;
  cout << "After Swap: " << a << " " << b << endl;
}

// Pass by address
void swapPA(int *a, int *b)
{
  cout << "Before Swap: " << *a << " " << *b << endl;
  int temp = *a;
  *a = *b;
  *b = temp;
  cout << "After Swap: " << *a << " " << *b << endl;
}

// Pass by reference
void swapPR(int &a, int &b)
{
  cout << "Before Swap: " << a << " " << b << endl;
  int temp = a;
  a = b;
  b = temp;
  cout << "After Swap: " << a << " " << b << endl;
}

int main()
{
  int x = 10, y = 20;
  // swapPV(x, y);
  // swapPA(&x, &y);
  swapPR(x, y);
  cout << "Main: " << x << " " << y << endl;
  return 0;
}