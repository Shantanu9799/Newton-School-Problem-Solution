#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    if (a < b && b < c) {
        // The sequence is in increasing order (stair)
        cout << "Stair";
    } else if (a < b && b > c) {
        // The sequence is in decreasing order (peak)
        cout << "Peak";
    } else {
        // The sequence is neither a stair nor a peak
        cout << "Nothing";
    }
    
    return 0;
}