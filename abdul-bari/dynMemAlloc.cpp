#include <bits/stdc++.h>
using namespace std;

void pointer1()
{
  int *p = new int[5];
  p[0] = 12;
  p[1] = 34;
  p[2] = 56;
  cout << &p[0] << endl;

  delete[] p;
  p = nullptr;
}

void pointer2()
{
  int size;
  cout << "Enter Number of Elements: ";
  cin >> size;

  int A[size];
  cout << sizeof(A) << endl;
}

void pointer3() {
  int size;
  cout << "Enter Number of Elements: ";
  cin >> size;

  int *p = new int[size];
  cout << sizeof(*p) << endl;
  cout << "Enter Number of Elements: ";
  cin >> size;
  p = new int[size];
  cout << sizeof(*p) << endl;

  delete[] p;
  p = nullptr;
}

int main()
{
  pointer1();
  pointer2();
  pointer3();
  return 0;
}