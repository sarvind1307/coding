#include<bits/stdc++.h>
using namespace std;

void palindrome(int num) {
  int rev = 0, temp = num;
  while (temp != 0) {
    int rem = temp % 10;
    rev = (rev * 10) + rem;
    temp /= 10;
  }
  if (num == rev) {
    cout << num << " is a palindrome." << endl;
  } else {
    cout << num << " is not a palindrome." << endl;
  }
}

int main() {
  int n;
  cin >> n;
  palindrome(n);
  return 0;
}