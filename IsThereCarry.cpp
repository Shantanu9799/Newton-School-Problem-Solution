#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

string isThereCarry(long long a, long long b) {
    // while(a > 0 || b > 0) {
    //     // calculating the last digit
    //     // if there is no digit left then making it as 0
    //     int da = a > 0 ? a%10 : 0;
    //     int db = b > 0 ? b%10 : 0;
    //     // getting the sum of last two digits
    //     int sum = da + db;
    //     // if the sum of last two digits is 10 or high 
    //     // then for sure we get a carry
    //     if(sum > 9) return "Yes";
    //     // else get the next two digits
    //     a /= 10; b /= 10;
    // }
    while(a > 0 && b > 0) {
        // calculating the last digit
        int da = a%10;
        int db = b%10;
        // getting the sum of last two digits
        int sum = da + db;
        // if the sum of last two digits is 10 or high 
        // then for sure we get a carry
        if(sum > 9) return "Yes";
        // else get the next two digits
        a /= 10; b /= 10;
    }
    return "No";
}

int main() {
	// Your code here
    long long a, b;
    cin >> a >> b;
    cout << isThereCarry(a, b);
    return 0;
}