#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int absDiff(string &s) {
    int freq[2] = {0};
    for(int i = 0; i < s.size(); i++) {
        freq[s[i]-'A']++;
    }
    return abs(freq[0]-freq[1]);
}

int main() {
	// Your code here
    string s;
    cin >> s;
    cout << absDiff(s);
    return 0;
}