#include<bits/stdc++.h>
using namespace std;

class Rectangle
{
public:
  int length;
  int breadth;

  int area()
  {
    return length * breadth;
  }

  int perimeter()
  {
    return 2 * (length + breadth);
  }
};

int main() {
  Rectangle *p;
  p = new Rectangle();
  p->length = 10;
  p->breadth = 5;
  cout << "Area: " << p->area() << endl;
  cout << "Perimeter: " << p->perimeter() << endl;
  delete p;
  return 0;
}

