#include <bits/stdc++.h>
using namespace std;
enum day
{
  mon,
  yue,
  wed,
  thu,
  fri,
  sat,
  sun
};
enum dept
{
  cs = 1,
  it,
  ece,
  mech
};

int main()
{
  day d;
  dept dep;
  d = mon;
  dep = cs;
  cout << "day " << d << endl;
  cout << "dep " << dep << endl;
  return 0;
}