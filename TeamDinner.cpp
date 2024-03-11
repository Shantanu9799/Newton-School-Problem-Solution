#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int dishes[n];
    for(int i = 0; i < n; i++) {
        cin >> dishes[i];
    }

    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += dishes[i];
    }

    double distribution = static_cast<double>(sum) / 7;  // Ensure division with floating-point number

    cout << fixed << setprecision(2) << distribution; 
    return 0;
}
