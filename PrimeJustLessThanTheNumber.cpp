#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

bool primeNumber(int x) {
    if(x == 1) return false;
    if(x == 2) return true;
    for(int i = 2; i <= sqrt(x); i++) {
        if(x%i == 0) return false;
    }
    return true;
}

int main() {
	// Your code here
    int n;
    cin >> n;
    while(!primeNumber(n)) {
        n--;
    }
    cout << n;
    return 0;
}