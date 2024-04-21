#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;

    int XOR = 0;
    for(int i = 2; i <= n; i++) {
        if((n%i) == 0 && ((i&1) == 0)) XOR ^= i;
    }
    cout << XOR;
    return 0;
}