#include <bits/stdc++.h>
using namespace std;

void getName()
{
  string name;
  cout << "May I know your name?\n";
  // cin >> name;
  getline(cin, name);
  cout << "Hello, " << name << endl;
}

void add2Nos() {
  int a,b,c;
  cout << "Enter 2 Nos:\n";
  cin >> a >> b;
  c = a + b;
  cout << "Sum of the two nos is: " << c << endl;
}

int main() {
  getName();
  add2Nos();
  return 0;
}


