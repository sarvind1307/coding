#include<bits/stdc++.h>
using namespace std;

class Base {
  public:
    void display() {
      cout << "Display of Base" << endl;
    }
};

class derived: public Base {
  public:
    void show() {
      cout << "Show of Derived" << endl;
    }
};

int main() {
  Base b;
  b.display();

  derived d;
  d.display();
  d.show();


  return 0;
}