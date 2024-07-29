#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

void solve()
{
  int n, x;
  cin >> n >> x;
  int sum = 0;
  int negativeCount = n - x;
  for (int i = 1; i < n + 1; i++)
  {
    if (negativeCount > 0)
    {
      sum -= pow(2, i);
      negativeCount--;
    }
    else
    {
      sum += pow(2, i);
    }
    // cout << "sum: " << sum << endl;
  }
  cout << sum << endl;
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
