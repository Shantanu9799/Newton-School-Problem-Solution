#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int a, b;
    cin >> a >> b;
    if(((a+b) & 1) == 1) cout << "Tia";
    else cout << "Raj";
    return 0;
}