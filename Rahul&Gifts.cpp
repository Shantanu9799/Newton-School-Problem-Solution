#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

string canReach(pair<int, int> p, string &direction) {
    pair<int, int> stand = {0, 0};
    for(int i = 0; i < direction.size(); i++) {
        if(direction[i] == 'L') stand.first--;
        else if(direction[i] == 'R') stand.first++;
        else if(direction[i] == 'U') stand.second++;
        else if(direction[i] == 'D') stand.second--;
        if (p == stand) return "YES";
    }
    return(p == stand) ? "YES" : "NO";
}

int main() {
	// Your code here
    pair<int, int> cur;
    int x, y;
    cin >> x >> y;
    cur.first = x;
    cur.second = y;
    string direction;
    cin >> direction;
    cout << canReach(cur, direction);
    return 0;
}