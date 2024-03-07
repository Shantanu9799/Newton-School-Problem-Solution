#include <bits/stdc++.h>
using namespace std;

string correctedWord(int n, string s) {
    stack<char> st;
    
    for (int i = 0; i < n; i++) {
        // Check if the current character is a vowel
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y') {
            // Check if the stack is not empty and the top of the stack is a vowel
            if (!st.empty() && (st.top() == 'a' || st.top() == 'e' || st.top() == 'i' || st.top() == 'o' || st.top() == 'u' || st.top() == 'y')) {
                // Pop the vowel from the stack
                st.pop();
            }
        } 
        // Push the current character onto the stack
        st.push(s[i]);
    }

    // Create a temporary vector to reverse the order
    vector<char> reversed;
    while (!st.empty()) {
        reversed.push_back(st.top());
        st.pop();
    }
    reverse(reversed.begin(), reversed.end());

    // Use accumulate on the reversed vector
    string resultString = accumulate(reversed.begin(), reversed.end(), string());
    return resultString;
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    cout << correctedWord(n, s);
    return 0;
}