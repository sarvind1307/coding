#include <bits/stdc++.h>
using namespace std;

class DivisionByZeroException : public exception
{
public:
  const char *what() const throw()
  {
    return "Division by zero";
  }
};

int main()
{
  int x = 10, y = 0, z;
  try
  {
    if (y == 0)
    {
      throw DivisionByZeroException();
    }
    z = x / y;
    cout << z << endl;
  }
  catch (DivisionByZeroException e)
  {
    cout << "Error: " << e.what() << endl;
  }
  return 0;
}