#include <bits/stdc++.h>
using namespace std;

int main()
{
  ifstream infile;
  infile.open("file.txt");
  if (!infile)
  {
    cout << "Error in opening file" << endl;
    return 1;
  }
  char str[255];
  while (infile)
  {
    infile.getline(str, 255);
    if (infile)
    {
      cout << str << endl;
    }
    if (infile.eof())
    {
      cout << "End of file reached" << endl;
    }
  }
  infile.close();
  return 0;
}