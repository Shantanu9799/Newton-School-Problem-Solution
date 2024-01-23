#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

string sumEqualtoTen(int a, int b, int c) {
    return ((a+b)>=10 || (a+c)>=10 || (b+c)>=10) ? "YES" : "NO";
}

int main() {
	// Your code here
    int a, b, c;
    cin >> a >> b >> c;
    cout << sumEqualtoTen(a, b, c);
    return 0;
}