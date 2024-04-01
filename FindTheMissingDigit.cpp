#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    string s;
    cin >> s;

    // is present digit
    int isPresent[10] = {0};
    for(int i = 0; i < 10; i++) {
        isPresent[s[i] - '0']++;
    }

    // now check for the ans
    for(int i = 0; i < 10; i++) {
        if(!isPresent[i]) cout << i;
    }
    return 0;
}
