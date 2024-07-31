#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

void solve()
{
  int n, d, x;
  cin >> n >> d;
  int a[n + 1];
  int count = 0;
  a[0] = 0;
  for (int i = 1; i <= n; i++)
  {
    cin >> x;
    if (x <= d)
    {
      a[i] = 0;
    }
    else
    {
      a[i] = 1;
    }
    if (a[i] != a[i - 1])
    {
      count++;
    }
  }
  cout << count << endl;
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
