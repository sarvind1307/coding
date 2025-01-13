#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
  int roll;
  string name;
  string branch;
  friend ofstream &operator<<(ofstream &ofs, Student &s);
  friend ifstream &operator>>(ofstream &ofs, Student &s);
};

ofstream &operator<<(ofstream &ofs, Student &s)
{
  ofs << s.roll << endl;
  ofs << s.name << endl;
  ofs << s.branch << endl;
  return ofs;
}

ifstream &operator>>(ifstream &ifs, Student &s)
{
  ifs >> s.roll;
  ifs >> s.name;
  ifs >> s.branch;
  cout << s.roll << endl;
  cout << s.name << endl;
  cout << s.branch << endl;
  return ifs;
}

int main()
{
  Student s1;

  s1.roll = 101;
  s1.name = "John";
  s1.branch = "CSE";

  ofstream ofs("student.txt", ios::trunc);
  ofs << s1;
  ofs.close();

  Student s2;
  ifstream ifs("student.txt");
  ifs >> s2;
  ifs.close();
  return 0;
}