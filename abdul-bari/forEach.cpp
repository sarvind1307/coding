#include<bits/stdc++.h>
using namespace std;

int main() {
  int A[] = {1,1,1,1,1};

  cout<< "Without reference" << endl;
  for (auto x: A) {
    cout << x++ << " ";
  }
  cout << endl;

  cout << "With reference" << endl;
  for (auto &x : A)
  {
    cout << ++x << " ";
  }
  cout << endl;
}
