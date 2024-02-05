#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

string isYes(string s) {
    if(tolower(s[0])=='y' && tolower(s[1])=='e' && tolower(s[2])=='s') return "Yes";
    return "No";
}

int main() {
	// Your code here
    string s;
    cin >> s;
    cout << isYes(s);
    return 0;
}