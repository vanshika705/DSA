#include <bits/stdc++.h>
using namespace std;

int nonRepeatedChar(string &s ){
    int n = s.length();
    vector<int> freq(26);
    
    for(char ch : s){
        freq[ch-'a']++;
    }
    
    
    for(int i = 0; i < n; i++){
        if(freq[s[i]-'a'] == 1){
            return i;
        }
    }
    
    return -1;
}
int main() {
    string s;
    cin >> s;
    
    int idx = nonRepeatedChar(s);
    if(idx == -1){
        cout<< -1;
    }
    else cout << s[idx];

    return 0;
}