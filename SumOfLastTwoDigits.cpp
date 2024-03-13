#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int sum = 0;
    sum += ((n%10) + ((n/10)%10));
    cout << sum;
    return 0;
}