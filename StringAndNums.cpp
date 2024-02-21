#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

string stringNum(string &s) {
    string newS = "";
    int freq[26] = {0};
    int sum = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i]-'0'>=0 && s[i]-'0'<=9) sum += (s[i] - '0');
        else freq[s[i] - 'a']++;
    }
    for(int i = 0; i < 26; i++) {
        int t = freq[i];
        while(t-- > 0) {
            newS += (char) ('a' + i);
        }
    }
    return newS+to_string(sum);
}

int main() {
	// Your code here
    string s;
    cin >> s;
    cout << stringNum(s);
    return 0;
}
