#include <bits/stdc++.h>
using namespace std;

class Complex
{
public:
  int real, img;
  Complex(int r = 0, int i = 0)
  {
    real = r;
    img = i;
  }

  Complex add(Complex c)
  {
    Complex temp;
    temp.real = real + c.real;
    temp.img = img + c.img;
    return temp;
  }

  Complex operator+(Complex c)
  {
    Complex temp;
    temp.real = real + c.real;
    temp.img = img + c.img;
    return temp;
  }

  friend Complex operator*(Complex c1, Complex c2);
};
Complex operator*(Complex c1, Complex c2)
{
  Complex temp;
  temp.real = c1.real + c2.real;
  temp.img = c1.img + c2.img;
  return temp;
}

int main()
{
  Complex c1(3, 7), c2(4, 8);
  Complex c3 = c1.add(c2);
  cout << "Sum is: " << c3.real << " + i" << c3.img << endl;
  Complex c4 = c1 + c2;
  cout << "Sum is: " << c4.real << " + i" << c4.img << endl;
  Complex c5 = c1 * c2;
  cout << "Sum is: " << c5.real << " + i" << c5.img << endl;
  return 0;
}