#include<bits/stdc++.h>
using namespace std;

class Base {
  public:
    void display() {
      cout << "Display of Base" << endl;
    }
};

class Derived : public Base {
  public:
    void display(int x) {
      cout << "Display of Derived: " << x << endl;
    }
};

int main() {
  Derived d;
  d.display(7);
  d.Base::display();
  return 0;w
}