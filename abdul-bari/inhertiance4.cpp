#include <bits/stdc++.h>
using namespace std;

class Parent
{
public:
  int a;
  int b;
  int c;

  void funcParent()
  {
    a = 10;
    b = 20;
    c = 30;
  }
};

class Child : public Parent
{
public:
  void funChild()
  {
    // a = 10; // Not accessible
    b = 20;
    c = 30;
  }
};

class GrandChild : public Child
{
public:
  void funGrandChild()
  {
    a = 10;
    b = 20;
    c = 30;
  }
};

int main()
{
  Child c;
  c.a = 10;
  c.b = 20;
  c.c = 30;
}