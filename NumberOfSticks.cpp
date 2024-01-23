#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int sameLength(int n) {
    return (n & 1) ? (n/2)+1 : n/2;
}

int main() {
	// Your code here
    int n;
    cin >> n;
    cout << sameLength(n);
    return 0;
}