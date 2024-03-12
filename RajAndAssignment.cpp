#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int m, n;
    cin >> m >> n;
    int task[n];
    for(int i = 0; i < n; i++) {
        cin >> task[i];
    }

    int totalDays = 0;
    for(int i = 0; i < n; i++) {
        totalDays += task[i];
    }

    if(totalDays <= m) cout << m-totalDays;
    else cout << -1;

    return 0;
}
