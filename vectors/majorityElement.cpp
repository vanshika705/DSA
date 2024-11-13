#include <iostream>
#include <vector>
using namespace std;

// brute approch
// int majorityElements(vector<int>& nums){
//     int n = nums.size();
//     for( int val : nums){
//         int freq =0 ;
//         for ( int el : nums){
//             if ( val == el){
//                 freq ++ ;
//             }
//         }
//         if ( freq > n/2)
//         return val;
//     }
//     return 0;
// }

// using sorting 
// int majorityElements(vector<int>& nums){
//     int n = nums.size();
    
//     sort(nums.begin(), nums.end());
//     int freq = 1, ans = nums[0];
//     for ( int i = 1 ; i < n ; i ++){
//         if ( nums[i] == nums[i+1]){
//             freq ++;
//         }
//         else {
//             freq = 1;
//             ans = nums[i];
//         }
//         if ( freq > n/2){
//             return ans;
//         }
//     }
  
//     return ans;
// }

// moore's voting approch
int majorityElements(vector<int>& nums){
    int n = nums.size();
    int freq = 0, ans =0;
    for ( int i = 0 ; i < n ; i ++){
        if ( freq == 0){
            ans = nums[i];
        }
        if(ans == nums [i]){
            freq ++ ;
        }
        else{
            freq --;
        }
    }
    int count =0;
    for( int val : nums){
        if ( val == ans){
            count ++ ;
        }
    }
    if ( count > n/2){
        return ans;
    }
    else{
        return -1 ;
    }

    return ans;
}

int main(){
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(1);


    cout << "vector is : " ;
    for(int val:nums){
        cout<< val << " ";
    }
    cout << endl;

    cout << "Majority elemnent in array is : " << majorityElements(nums);
    return 0;
}