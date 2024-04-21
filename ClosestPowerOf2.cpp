#include <iostream>
#include <cmath>

using namespace std;

int closestPowerOf2(int n) {
    // Finding the closest power of 2
    int closestPower = 1;
    int minDiff = abs(n - closestPower);
    for (int power = 0; power <= 31; power++) {
        int currentPower = 1 << power;
        int diff = abs(n - currentPower);
        if (diff < minDiff) {
            minDiff = diff;
            closestPower = currentPower;
        }
    }
    return closestPower;
}

int main() {
    int n;
    cin >> n;

    // Find the closest power of 2
    int closest = closestPowerOf2(n);

    cout << closest;

    return 0;
}