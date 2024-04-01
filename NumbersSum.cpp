#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int changedNum(int &n) {
    int last = n % 10;
    n /= 10;
    n = (last * 100) + n;
    return n;
}

int main() {
	// Your code here
    int n;
    cin >> n;
    int sum = n;
    sum += changedNum(n);
    sum += changedNum(n);
    cout << sum;
    // cout << changedNum(n) << endl;
    // cout << changedNum(n) << endl;
    return 0;
}