#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

string concatenation(string a, string b) {
    return b+'-'+a;
}

int main() {
	// Your code here
    string a, b;
    cin >> a >> b;
    cout << concatenation(a, b);
    return 0;
}