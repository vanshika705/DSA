#include <iostream>
#include <vector>
using namespace std;
// brute force approach
vector<int> pairSum(vector<int>& nums , int target){
    vector<int> ans;
    int n = nums.size();
    for ( int i =0 ; i<n ; i++ ){
        for( int j = i+1 ; j < n ; j++){
            if ( nums[i] + nums [j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

// two pointer approach ( optimal )
// vector<int> pairSum(vector<int>& nums , int target){
//     vector<int> ans;
//     int n = nums.size();
//     int i =0 , j = n-1;
//     while( i < j){
//         int pairSum = nums[i] + nums[j];
//         if ( pairSum > target){
//             j--;
//         }
//         else if ( pairSum < target){
//             i++;
//         }
//         else{
//             ans2.push_back(i);
//             ans2.push_back(j);
//             return ans;
//         }
//     }
//     return ans;
// }
int main(){
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(7);
    nums.push_back(11);
    nums.push_back(15);
    cout << "vector is : " ;
    for(int val:nums){
        cout<< val << " ";
    }
    cout << endl;

    int target = 0; 
    cout << " enter target sum : " ;
    cin >> target ;
    
    vector<int> ans = pairSum(nums, target);
    vector<int> ans = pairSum(nums, target);
    
    cout << "Index of elements are : " << ans[0] << "," << ans[1] << endl;

    return 0;
}