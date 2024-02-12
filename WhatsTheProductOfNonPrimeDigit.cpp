#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

long long productOfNonPrimeDigit(int n) {
    long long product = 1;
    while(n != 0) {
        int digit = n % 10;
        if(digit!=2 && digit!=3 && digit!=5 && digit!=7) product *= digit;
        n /= 10;
    }
    return product;
}

int main() {
	// Your code here
    int n;
    cin >> n;
    cout << productOfNonPrimeDigit(n);
    return 0;
}