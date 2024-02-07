#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n, s;
    cin >> n >> s;
    vector<int> mugs(n);
    int sum = 0, maxi = INT_MIN;
    for(int i = 0; i < n; i++) {
        cin >> mugs[i];
    }
    for(int i = 0; i < n; i++) {
        sum += mugs[i];
        maxi = max(maxi, mugs[i]);
    }
    // cout << "Sum " << sum << " Maxi " << maxi <<  " diff " << sum-maxi << endl;
    if(s < (sum-maxi)) cout << "No";
    else cout << "Yes";
    return 0;
}