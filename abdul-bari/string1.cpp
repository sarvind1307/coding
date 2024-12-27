#include <bits/stdc++.h>
using namespace std;

void string1()
{
  char s[20];
  cout << "Enter Name: ";
  cin >> s;
  cout << "Name: " << s << endl;
}

void string2()
{
  char s[20];
  cout << "Enter Name: ";
  cin.get(s, 20);
  cout << "Name: " << s << endl;
}

void string3()
{
  char s[20];
  cout << "Enter Name: ";
  cin.getline(s, 20);
  cout << "Name: " << s << endl;
}

int main()
{
  // string1();
  // string2();
  string3();
  return 0;
}