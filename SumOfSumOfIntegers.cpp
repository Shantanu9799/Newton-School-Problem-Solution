#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

long long sumOfSumOfInt(int n) {
    long long sum = 0;
    for(int i = 1; i <= n; i++) {
        if(i <= 9) sum += i;
        else {
            int num = i;
            while(num != 0) {
                sum += (num%10);
                num /= 10;
            }
        }
    }
    return sum;
}

int main() {
	// Your code here
    int n;
    cin >> n;
    cout << sumOfSumOfInt(n);
    return 0;
}