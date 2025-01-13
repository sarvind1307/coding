#include <bits/stdc++.h>
using namespace std;

class Innova
{
public:
  static int price;
  static int getPrice()
  {
    return price;
  }
};
int Innova::price = 20;

class Student
{
public:
  int roll;
  string name;
  static int addNo;
  Student(string n)
  {
    roll = ++addNo;
    name = n;
  }
  void display()
  {
    cout << "Name: " << name << " Roll: " << roll << " Total Addmissions: " << addNo << endl;
  }
};
int Student::addNo = 0;

int main()
{
  Innova i1, i2;
  cout << i1.getPrice() << endl;
  cout << i2.getPrice() << endl;
  cout << Innova::getPrice() << endl;
  cout << Innova::price << endl;

  Student s1("John");
  Student s2("Doe");
  Student s3("Smith");
  s1.display();
  s2.display();
  s3.display();
  return 0;
}