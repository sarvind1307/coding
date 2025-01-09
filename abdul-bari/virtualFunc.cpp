#include<bits/stdc++.h>
using namespace std;

class Base {
  public:
    virtual void fun() {
      cout << "Fun of Base" << endl;
    }
};

class Derived : public Base {
  public:
    void fun() {
      cout << "Fun of Derived" << endl;
    }
};

int main() {
  Base *ptr = new Derived();
  ptr->fun();
  return 0;
}