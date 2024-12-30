#include<bits/stdc++.h>
using namespace std;

class Rectangle
{
  private:
    int length;
    int breadth;
  public:
    // Default Constructor
    Rectangle()
    {
      length = 1;
      breadth = 1;
    };

  // Parameterized Constructor
    Rectangle(int l, int b)
    {
      length = l;
      breadth = b;
    }

    // Copy Constructor
    Rectangle(Rectangle &r)
    {
      length = r.length;
      breadth = r.breadth;
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

  Rectangle r2;
  cout << "Area: " << r2.area() << endl;
  cout << "Perimeter: " << r2.perimeter() << endl;

  Rectangle r3(r1);
  cout << "Area: " << r3.area() << endl;
  cout << "Perimeter: " << r3.perimeter() << endl;
  return 0;
}