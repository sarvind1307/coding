#include <bits/stdc++.h>
using namespace std;

void whileLoop(int stop)
{
  cout << "WHILE LOOP\n";
  int i = 0;
  while (i < stop)
  {
    cout << "I = " << ++i << endl;
  }
}

void doWhileLoop(int stop)
{
  cout << "DO-WHILE LOOP\n";
  int i = 0;
  do
  {
    cout << "I = " << ++i << endl;
  } while (i < stop);
}

void forLoop (int stop) {
  cout << "FOR LOOP\n";
  for (int i = 0; i < stop;)
  {
    cout << "I = " << ++i << endl;
  }
}

int main()
{
  int stop;
  cout << "Enter Stop Count:\n";
  cin >> stop;
  whileLoop(stop);
  doWhileLoop(stop);
  forLoop(stop);
  return 0;
}