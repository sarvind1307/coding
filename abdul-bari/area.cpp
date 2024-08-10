#include <bits/stdc++.h>
using namespace std;

float triangle()
{
  float base, height;
  cout << "Enter Base and Height\n";
  cin >> base >> height;
  return (base * height) / 2;
}

float circle()
{
  float radius;
  cout << "Enter Radius\n";
  cin >> radius;
  return (3.14 * radius * radius);
}

int main()
{
  float answer;
  // answer = triangle();
  answer = circle();
  cout << "Area is " << answer << endl;
  return 0;
}