#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

void solve()
{
  int X, Y;
  cin >> X >> Y;
  if (X == Y)
  {
    cout << "SAME" << endl;
  }
  else if (X < Y)
  {
    cout << "INCREASED" << endl;
  }
  else
  {
    cout << "DECREASED" << endl;
  }
}

int main()
{
  int T = 1;
  // cin >> T;
  // while(T--){
  //   solve();
  // }
  solve();
  return 0;
}
