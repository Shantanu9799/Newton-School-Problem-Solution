#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int maxIdx(int n, vector<int> &v) {
    int idx = 0, maxi = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(maxi < v[i]) {
            idx = i;
            maxi = v[i];
        }
    }
    return idx+1;
}

int secondMaxi(int n, vector<int> &v) {
    int maxi = INT_MIN, sec_maxi = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(v[i] > maxi) {
            sec_maxi = maxi;
            maxi = v[i];
        } else if(v[i] < maxi && v[i] > sec_maxi) {
            sec_maxi = v[i];
        }
    }
    return sec_maxi;
}

int main() {
	// Your code here
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout << maxIdx(n, v) << " " << secondMaxi(n, v);
    return 0;
}