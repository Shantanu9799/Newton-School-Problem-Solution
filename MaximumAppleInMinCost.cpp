#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int minimumRupees(int n, int a, int b) {
    int buyOneApple = n * a;
    int buyTwoAppleAtOnce = ((n & 1) == 0) ? (n/2)*b : ((n/2)*b)+a;
    return min(buyOneApple, buyTwoAppleAtOnce);
}

int main() {
	// Your code here
    int n, a, b;
    cin >> n >> a >> b;
    cout << minimumRupees(n, a, b);
    return 0;
}