#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

pair<int, int> rowPixel(int n) {
    for(int i = sqrt(n); i >= 1; i--) {
        if(n % i == 0) {
            int row = i;
            int pixel = n / i;
            if(row * pixel == n) return {row, pixel};
        }
    }
    return {-1, -1};
}

int main() {
	// Your code here
    int n;
    cin >> n;
    pair<int, int> p = rowPixel(n);
    cout << p.first << " " << p.second; 
    return 0;
}
