#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int f(int n) {
    int sumOfN = 0;
    while(n != 0) {
        sumOfN += (n % 10);
         n /= 10;
    }
    return sumOfN;
}

int main() {
	// Your code here
    int n;
    cin >> n;
    if((n % f(n)) == 0) cout << "Yes";
    else cout << "No";
    return 0;
}