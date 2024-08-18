#include <bits/stdc++.h>
using namespace std;

void linearSearch(int num)
{
  int A[] = {9, 8, 2, 3, 5, 6, 9, 2, 8, 3, 5, 6, 132, 2, 9, 3, 8, 5, 0};

  for (int i = 0; i < sizeof(A)/sizeof(A[0]); i++)
  {
    if (A[i] == num) {
      cout << "Found at index: " << i << endl;
      return;
    }
  }
  cout << "Not Found" << endl;
}

int main()
{
  int num;
  cout << "Enter Number for search: ";
  cin >> num;
  linearSearch(num);
  return 0;
}