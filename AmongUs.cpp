#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int imposter(int n, vector<int> &v) {
    if(v[0] != v[1] && v[1]==v[2]) return 1;
    for(int i = 1; i < n-1; i++) {
        if(v[i] != v[i-1]) {
            if(v[i] != v[i+1]) return i+1;
        }
    }
    return n;
}

int main() {
	// Your code here
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout << imposter(n, v);
    return 0;
}