#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

long long divideBy200(long long n) {
    return n/200;
}

long long notDividedBy200(long long n) {
    string s = to_string(n) + "200";
    long long result = stoll(s); // Convert the string to a long long integer
    return result;
}

int main() {
	// Your code here
    long long n, k;
    cin >> n >> k;
    while(k--) {
        if(n%200 == 0) n = divideBy200(n);
        else n = notDividedBy200(n);
    }
    cout << n;
    return 0;
}