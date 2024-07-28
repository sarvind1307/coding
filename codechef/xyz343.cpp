#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

void solve()
{
  int x, y, z;
  cin >> x >> y >> z;
  int total = x * y;
  if (total <= z)
  {
    cout << 0 << endl;
  }
  else
  {
    total = z;
    int remaining = total - z;
    int ans = x - (z / y);
    cout << ans << endl;
  }
}

int main()
{
  int T = 1;
  cin >> T;
  while (T--)
  {
    solve();
  }
  return 0;
}
