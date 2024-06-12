#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

string actualTime(string time) {
    int len = time.size();
    string hh = time.substr(0,2);
    if(hh == "00") {
        time =  "12"+time.substr(2)+" AM";
    } else {
        int hour = stoi(hh);
        if(hour > 12) {
            hour -= 12;
            time = hour >= 10 ? to_string(hour)+time.substr(2)+" PM" : "0"+to_string(hour)+time.substr(2)+" PM";
        } else if(hour < 12) {
            time += " AM";
        } else {
            time += " PM";
        }
    }
    return time;
}

int main() {
	// Your code here
    string time;
    cin >> time;
    cout << actualTime(time);
    return 0;
}
