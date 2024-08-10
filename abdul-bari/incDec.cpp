#include <bits/stdc++.h>
using namespace std;

int main()
{
  int i = 5, j;
  j = i++;
  cout << "i++ = " << i << " " << j << endl;
  j = ++i;
  cout << "++i = " << i << " " << j << endl;

  j = i--;
  cout << "i-- = " << i << " " << j << endl;
  j = --i;
  cout << "--i = " << i << " " << j << endl;
}