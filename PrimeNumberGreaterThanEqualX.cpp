#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

bool isPrime(int i) {
    if(i == 1) return false;
    if(i == 2) return true;
    for(int div = 2; div <= sqrt(i); div++) {
        if(i%div == 0) return false;
    }
    return true;
}

int PrimeGreaterOrEqualX(int x) {
    bool flag = true;
    while(flag) {
        if(isPrime(x)) flag = false;
        else x++;
    }
    return x;
}

int main() {
	// Your code here
    int x;
    cin >> x;
    cout << PrimeGreaterOrEqualX(x);
    return 0;
}
