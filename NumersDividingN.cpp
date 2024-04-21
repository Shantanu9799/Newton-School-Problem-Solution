#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int numberOfDivisors(int n) {
    int cnt = 0;
    for(int i = 1; i <= n; ++i) {
        if(n%i == 0) cnt++;
    }
    return cnt;
}

int main() {
	// Your code here
    int n;
    cin >> n;
    cout << numberOfDivisors(n);
    return 0;
}