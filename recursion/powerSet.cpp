#include <iostream>
#include <vector>
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

    //exclude
    ans.pop_back();
    powerSet(arr,ans,i+1,allSubsets);
   
}

vector<vector<int>> subsets(vector<int>& arr){
    vector<vector<int>> allSubsets;
    vector<int> ans;
    int i =0;

    powerSet(arr,ans,i,allSubsets);

    return allSubsets;
}

int main(){
    vector<int> arr = {1,2,3};
    
    for(const auto &row : subsets(arr)){
        for(const auto &val : row){
            cout<< val << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}