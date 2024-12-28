#include<bits/stdc++.h>
using namespace std;

string extractUserFromEmail(const string& email)
{
  int i = 0;
  while (email[i] != '@')
  {
    i++;
  }
  return email.substr(0, i);
}

int main()
{
  string email = "arvind@def.com";
  cout << extractUserFromEmail(email) << endl; // Output: abc
  return 0;
}