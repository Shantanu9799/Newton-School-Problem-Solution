#include <iostream>
#include <string>
using namespace std;

int maxVolume(int n, const string &s) {
    int maxi = 0, count = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            count++;
        } else if (isspace(s[i])) {
            maxi = max(maxi, count);
            count = 0;
        }
    }
    maxi = max(maxi, count);
    return maxi;
}

int main() {
    int n;
    cin >> n;
    cin.ignore(); // Ignore the newline character left in the buffer

    string s;
    getline(cin, s);

    cout << maxVolume(n, s) << endl;
    return 0;
}