#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int gcd(int a, int b) {
    if(a == 0) return b;
    if(b == 0) return a;
    return (a > b) ? gcd(a%b, b) : gcd(a, b%a);
}

int main() {
	// Your code here
    int a, b, n, winner;
    cin >> a >> b >> n;
    bool flag = true, turn = true;
    while(flag) {
        if(turn) {
            if(gcd(a, n) <= n) {
                n -= gcd(a, n);
            } else {
                winner = 1;
                flag = false;
            }
            turn = false;
        }else {
            if(gcd(b, n) <= n) {
                n -= gcd(b, n);
            } else {
                winner = 0;
                flag = false;
            }
            turn = true;
        }
    }
    cout << winner;
    return 0;
}