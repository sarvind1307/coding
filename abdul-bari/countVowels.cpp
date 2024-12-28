#include <bits/stdc++.h>
using namespace std;

int countVowels(const string& s)
{
  int count = 0;
    // Use a set for fast membership testing
    const unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    
    for (char c : s) // Range-based for loop for better readability
  {
        if (vowels.count(c)) // Check if the character is a vowel
    {
      count++;
    }
  }
  return count;
}

int main()
{
  string s = "Hello, World!";
  cout << countVowels(s) << endl; // Output: 3
  return 0;
}