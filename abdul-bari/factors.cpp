#include<bits/stdc++.h>
using namespace std;

void factors(int num) {
  for (int i = 1; i <= num; i++) {
    if (num % i == 0) {
      cout << i << " ";
    }
  }
  cout << endl;
}

int main() {
  int num;
  cout << "Enter Num: ";
  cin >> num;
  factors(num);
  return 0;
}