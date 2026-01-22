#include <bits/stdc++.h>
using namespace std;

int freqElement(vector<int> &a, int n  ){
    unordered_map<int,int> mp;
    
    for(int i : a){
        mp[i]++;
    }
    
    int maxFreq = 0;
    int ans = INT_MAX;
    
    for(auto i : mp){
        if(i.second > maxFreq){
            maxFreq = i.second;
            ans = i.first;
        }
        else if(i.second == maxFreq){
            ans = min(ans,i.first);
        }
    }
    
    return ans;
}
int main() {
    int n;
    cin >> n;

    if(n == 0)  {
        cout<< -1
        return 0 ;
    };

    else{
    
    cout<< "enter element :";
    vector<int> a(n);
    for(int i = 0; i < n ; i++){
        cin >> a[i];
    }
    
    
    cout << "element with max count : "<<freqElement(a,n);
    }

    return 0;
}