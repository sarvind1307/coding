#include <bits/stdc++.h>
using namespace std;

int main()
{
  map<int, string> m;
  m.insert(pair<int, string>(1, "John"));
  m.insert(pair<int, string>(2, "Doe"));
  m.insert(pair<int, string>(3, "Jane"));

  map<int, string>::iterator itr;
  cout << "Using iterator:" << endl; 
  for (itr = m.begin(); itr != m.end(); itr++)
  {
    cout << itr->first << " " << itr->second << endl;
  }

  map<int, string>::iterator itr1;
  cout << "Using find():" << endl;
  itr1 = m.find(2);
  cout << itr1->first << " " << itr1->second << endl;
  return 0;
}