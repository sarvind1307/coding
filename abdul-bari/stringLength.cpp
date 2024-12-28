#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    // Direct Oeprator
    // cout << "Length of the string is: " << s.length() << endl;

    // Iterator
    int count = 0;
    string::iterator it;
    for (it = s.begin(); it != s.end(); it++) {
        count++;
    }
    cout << "Length of the string is: " << count << endl;
    return 0;
}