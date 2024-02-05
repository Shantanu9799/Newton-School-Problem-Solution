#include <bits/stdc++.h>
using namespace std;

int fibonacci(int a, int b, int n, int Xor) {
    if (n < 0)
        return Xor;
    return fibonacci(b, Xor, n - 1, a ^ b);
}

int main() {
    int a, b, n;
    cin >> a >> b >> n;
    int Xor = a ^ b;
    if(n == 1) cout << a;
    else cout << fibonacci(a, b, n - 2, Xor);
    return 0;
}