#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(const string& s)
{
  int n = s.size();
  for (int i = 0; i < n / 2; i++)
  {
    if (s[i] != s[n - i - 1])
    {
      return false;
    }
  }
  return true;
}

int main()
{
  string s;
  cout << "Enter a string: ";
  cin >> s;
  cout << boolalpha << checkPalindrome(s) << endl;
  return 0;
}