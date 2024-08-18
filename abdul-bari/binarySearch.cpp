#include <bits/stdc++.h>
using namespace std;

void binarySearch(int key)
{
  int A[] = {6, 8, 13, 17, 20, 22, 25, 28, 30, 35};
  int low = 0;
  int high = sizeof(A) / sizeof(A[0]) - 1; // Corrected to get the last index
  bool found = false; // Flag to check if the key is found
  while (low <= high) {
    int mid = low + (high - low) / 2; // Corrected mid calculation

    if (A[mid] == key) {
      cout << "Found at index: " << mid << endl;
      found = true; // Set found flag to true
      break;
    } else if (A[mid] < key) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }

  if (!found) { // Check if the key was not found
  cout << "Key Not Found" << endl;
}
}

int main()
{
  int key;
  cout << "Enter Number for search: ";
  cin >> key;
  binarySearch(key);
  return 0;
}