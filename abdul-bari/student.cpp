#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
  int roll;
  string name;
  int marks1, marks2, marks3;

public:
  Student(int r, string n, int m1, int m2, int m3)
  {
    roll = r;
    name = n;
    marks1 = m1;
    marks2 = m2;
    marks3 = m3;
  }

  int getTotalMarks()
  {
    return marks1 + marks2 + marks3;
  }

  char getGrade()
  {
    float avg = getTotalMarks() / 3;
    if (avg >= 60)
      return 'A';
    else if (avg >= 40)
      return 'B';
    else
      return 'C';
  }
};

int main()
{
  Student s1(1, "John", 50, 50, 50);
  cout << "Total: " << s1.getTotalMarks() << endl;
  cout << "Grade: " << s1.getGrade() << endl;
  return 0;
}