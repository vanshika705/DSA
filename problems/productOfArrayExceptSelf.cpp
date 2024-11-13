#include <iostream>
#include <vector>
using namespace std;

// brute force approch 
// int productOfArray(vector<int>& nums){
//     int n = nums.size();
//     vector<int> ans(n,1);

//     for(int i =0; i<n ; i++){
//         for( int j =0 ; j < n ; j++){
//             if(i!=j){
//                 ans[i] *= nums[j];
//             }
//         }
        
//     }
//     for(int val:ans){
//         cout<< val << " ";
//     }
//     return 0;
// }

// optimal approch 

 int productOfArray(vector<int>& nums){
    int n = nums.size();
    vector<int> ans(n,1);
    int suffix =1;

    // prefix
    for(int i =1; i<n ; i++){
        ans[i] = ans[i-1] * nums[i-1] ;       
    }

    // suffix
    for(int i =n-2; i>=0 ; i--){
        suffix  *= nums[i+1];
        ans[i] *= suffix;
        
    }
    
    for(int val:ans){
        cout<< val << " ";
    }
    return 0;
}

int main(){

    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);

    cout << "vector is : " ;
    for(int val:nums){
        cout<< val << " ";
    }
    cout << endl;

    cout<< "Product of array is : " << productOfArray(nums);
    return 0;
}