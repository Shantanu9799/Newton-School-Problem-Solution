bool isAnagram(string s, string p) {
    int freq[26] = {0};
    for(int i = 0; i < s.size(); i++) {
        freq[s[i] - 'A']++;
        freq[p[i] - 'A']--;
    }

    for(int i = 0; i < 26; i++) {
        if(freq[i] != 0) return false;
    } 
    return true;
}

vector<int> findAnagramsIndices(string str, string ptr, int n, int m){
    // Write you code here.
    vector<int> index;
    for(int i = 0; i <= n-m; i++) {
        string s = str.substr(i, m);
        if(isAnagram(s, ptr)) index.push_back(i);
    }
    return index;
}