#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
private:
  int length;
  int breadth;

public:
  // Parameterized Constructor
  Rectangle(int length, int breadth)
  {
    this->length = length;
    this->breadth = breadth;
  }

  int area()
  {
    return length * breadth;
  }

  int perimeter()
  {
    return 2 * (length + breadth);
  }
};

int main()
{
  Rectangle r1(10, 5);
  cout << "Area: " << r1.area() << endl;
  cout << "Perimeter: " << r1.perimeter() << endl;
  return 0;
}