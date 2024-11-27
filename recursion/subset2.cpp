#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//O(2^n * n)
void powerSet(vector<int>& arr,vector<int>& ans, int i ,vector<vector<int>> &allSubsets){ // recursive function
    
    if(i== arr.size()){
        allSubsets.push_back({ans});
        return;
    }

    
    //include
    ans.push_back(arr[i]);
    powerSet(arr,ans,i+1,allSubsets);

   
    ans.pop_back();

    int idx = i+1;
    while(idx < arr.size() && arr[idx] == arr[idx-1]) idx++;

     //exclude
    powerSet(arr,ans,idx,allSubsets);
   
}

vector<vector<int>> subsetsWithDup(vector<int>& arr){
    sort(arr.begin(),arr.end());

    vector<vector<int>> allSubsets;
    vector<int> ans;
    int i =0;

    powerSet(arr,ans,i,allSubsets);

    return allSubsets;
}

int main(){
    vector<int> arr = {1,2,2};
    
    for(const auto &row : subsetsWithDup(arr)){
        for(const auto &val : row){
            cout<< val << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}