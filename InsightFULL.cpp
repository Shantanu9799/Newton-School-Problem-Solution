#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int winner(int n, vector<vector<int>> lengthQuality) {
    int maxi = 0, idx = 0;
    for(int i = 0; i < n; i++) {
        if(lengthQuality[i][0] <= 10) {
            if(maxi < lengthQuality[i][1]) {
                maxi = lengthQuality[i][1];
                idx = i;
            }
        }
    }
    return idx + 1;
}

int main() {
	// Your code here
    int n;
    cin >> n;
    vector<vector<int>> lengthQuality(n)
;
    for(int i = 0; i < n; i++) {
        int ai, bi;
        cin >> ai >> bi;
        lengthQuality[i] = {ai, bi};
    }
    cout << winner(n, lengthQuality);
    return 0;
}