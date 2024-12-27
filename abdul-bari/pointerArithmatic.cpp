#include <bits/stdc++.h>
using namespace std;

int main()
{
  int A[5] = {2, 4, 6, 8, 10};
  int *p = A;

  cout << p << " " << *p << " " << &p << endl;

  p++;
  cout << "After p++:\n";
  cout << p << " " << *p << " " << &p << endl;
  p+=2;
  cout << "After p+=2:\n";
  cout << p << " " << *p << " " << &p << endl;

  int *q = &A[1];
  int d = p-q;
  cout << "p = " << p << " q = " << q << " d = " << d << endl;
  return 0;
}