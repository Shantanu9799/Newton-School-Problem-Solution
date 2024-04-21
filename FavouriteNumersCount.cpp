#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int countOfNine(int n) {
    int cnt = 0;
    while(n) {
        cnt += (n%10 == 7) ? 1 : 0;
        n /= 10;
    }
    return cnt;
}

int main() {
	// Your code here
    int n;
    cin >> n;
    cout << countOfNine(n);
    return 0;
}