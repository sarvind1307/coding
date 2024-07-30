#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

void solve()
{
  int d, l, r;
  cin >> d >> l >> r;
  if (l <= d && d <= r)
  {
    cout << "Take second dose now" << endl;
  }
  else if (l > d)
  {
    cout << "Too Early" << endl;
  }
  else
  {
    cout << "Too Late" << endl;
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
