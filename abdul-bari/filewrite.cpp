#include<bits/stdc++.h>
using namespace std;

int main() {
  ofstream ofs("file.txt", ios::app);
  ofs << "Hello World!" << endl;
  ofs << 123 << endl;
  ofs << 123.456 << endl;
  ofs.close();
  return 0;
}