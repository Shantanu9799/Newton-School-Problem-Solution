#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n, m, k;
    cin >> n >> m >> k;
    if(min(m, k) >= n) cout << "YES";
    else cout << "NO";
    return 0;
}
