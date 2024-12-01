#include <iostream>
#include <vector>
#include <string>
using namespace std;

void getPermute(string str, int idx,vector<string> &ans){ // recursive function
    if(idx == str.size()){
        ans.push_back(str);
        return;
    }

    for(int i =idx ; i<str.size();i++){
        swap(str[idx],str[i]); //idx place => ith element choice
        getPermute(str,idx+1,ans);

        swap(str[idx],str[i]); //backtracking
    }
}

vector<string> permute(string str){
    vector<string> ans;
    getPermute(str,0,ans);
    return ans;
    }

int main(){
    string str = "abc";
    
    for(const auto &row : permute(str) ){
        for(const auto &el : row){
            cout<< el ;
        }
        cout<< endl;
    }
    cout<< endl;

    return 0;
}