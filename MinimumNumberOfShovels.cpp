#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int minimumShovels(int k, int r) {
    int i;
    for(i = 1; i <= 10; i++) {
        int cost = (i * k);
        if(cost%10 == r || cost%10==0) return i;
    }
    return 10;
}

int main() {
	// Your code here
    int k , r;
    cin >> k >> r;
    cout << minimumShovels(k, r);
    return 0;
}