#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

bool isPalin(string s){
    string s2=s;
    reverse(s2.begin(),s2.end());

    return s==s2;
}

void getAllParts(string s,vector<string> &partitions, vector<vector<string>> &ans ){
    if(s.size() == 0){
        ans.push_back(partitions);
        return;
    }

    for(int i =0 ; i <s.size();i++){
        string part = s.substr(0,i+1);

        if(isPalin(part)){
            partitions.push_back(part);
            getAllParts(s.substr(i+1),partitions,ans);
            partitions.pop_back();
        }

    }
}

vector<vector<string>> partition(string s){
    vector<string> partitions;
    vector<vector<string>> ans;

    getAllParts(s,partitions,ans);
    return ans;
}

int main(){
    string s= "aab";
  
    for(const auto &row :partition(s)){
        for(const auto &val :row){
            cout<<val<< " ";
        }
        cout<<endl;
    }
    cout<<endl;

    return 0;
}

