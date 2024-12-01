#include <iostream>
#include <vector>
using namespace std;

void getPermute(vector<int>& arr, int idx,vector<vector<int>> &ans){ // recursive function
    if(idx == arr.size()){
        ans.push_back({arr});
        return;
    }

    for(int i =idx ; i<arr.size();i++){
        swap(arr[idx],arr[i]); //idx place => ith element choice
        getPermute(arr,idx+1,ans);

        swap(arr[idx],arr[i]); //backtracking
    }
}

vector<vector<int>> permute(vector<int>& arr){
    vector<vector<int>> ans;
    getPermute(arr,0,ans);
    return ans;
    }

int main(){
    vector<int> arr = {1,2,3};
    
    for(const auto &row : permute(arr) ){
        for(const auto &el : row){
            cout<< el << " ";
        }
        cout<< endl;
    }
    cout<< endl;

    return 0;
}