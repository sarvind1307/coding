#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

void solve()
{
  int a, b, c, x, cuboid, cube;
  cin >> a >> b >> c >> x;
  cube = x * x * x;
  cuboid = a * b * c;
  if (cube == cuboid)
  {
    cout << "EQUAL" << endl;
  }
  else if (cube > cuboid)
  {
    cout << "CUBE" << endl;
  }
  else
  {
    cout << "CUBOID" << endl;
  }
}

int main()
{
  // int T = 1;
  // cin >> T;
  // while(T--){
  //   solve();
  // }
  solve();
  return 0;
}
