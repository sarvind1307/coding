#include <bits/stdc++.h>
using namespace std;

void stringLength(char *s)
{
  cout << "Length of the string is: " << strlen(s) << endl;
  return;
}

void stringConcatenate()
{
  char s1[] = "Hello";
  char s2[] = "World!";
  cout << "Concatenated string is: ";
  strcat(s1, s2);
  cout << s1 << endl;
  return;
}

int main()
{
  // cout << "Enter a string: ";
  // char *s = new char[100];
  // cin.getline(s, 100);
  // stringLength(s);

  stringConcatenate();

  return 0;
}