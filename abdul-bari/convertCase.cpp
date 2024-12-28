#include<bits/stdc++.h>
using namespace std;

string convertCase(string s) {
    string convertedString = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 65 && s[i] <= 90) {
          // Upper case to lower case
            convertedString += s[i] + 32;
        } else if (s[i] >= 97 && s[i] <= 122) {
          // Lower case to upper case
            convertedString += s[i] - 32;
        } else {
          // Other chars
            convertedString += s[i];
        }
    }
    return convertedString;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    string convertedString = convertCase(s);
    cout << convertedString << endl;
    return 0;
}