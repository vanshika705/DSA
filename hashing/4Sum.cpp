#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> fourSum(vector<int>& vec , int target ){
    vector<vector<int>> ans ;
    int n = vec.size();

    sort(vec.begin(),vec.end());

    for(int i =0 ; i<n ; i++){
        if(i>0 && vec[i] == vec[i-1]) continue ; // skips duplicate values

        for(int j =i+1 ; j<n ;){
            int p = j+1, q = n-1;

            while(p<q){
                long long sum = (long long)vec[i] +(long long)vec[j] +(long long)vec[p] +(long long)vec[q] ;

                if(sum<target ){
                    p++;
                }else if(sum > target ){
                    q--;
                }else {
                    // sum == target 
                    ans.push_back({vec[i], vec[j], vec[p],vec[q]});
                    p++; q--;

                    while(p<q && vec[p] == vec[p-1]) p++ ; // skips duplicate values
                }
            } 
            j++ ; 
            while(j<n && vec[j] == vec[j-1]) j++ ; // skips duplicate values
        }
    }
   
    return ans;
}

int main(){
    vector<int> vec = {-2,-1,-1,1,1,2,2};
    int target = 0;

    for(int val:vec){
        cout << val << " ";
    }
    cout << endl;

    cout<< "elements of 4 sum pair is : ";
    for(const auto& row :fourSum(vec, target)){
            for(const auto& element : row){
            cout << element << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}
