#include <bits/stdc++.h>
using namespace std;

int main()
{
  forward_list<int> v = {2, 4, 6, 8, 10};
  v.push_front(20);
  v.push_front(30);
  // v.pop_back();
  forward_list<int>::iterator it = v.begin();
  cout << "Using iterator: ";
  for (it = v.begin(); it != v.end(); it++)
  {
    cout << ++*it << " ";
  }

  cout << "\nUsing for loop: ";
  for (int x : v)
  {
    cout << x << " ";
  }
  return 0;
}