#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int sumOfSubarrays(vector<int>& nums){
    int maxSum = 0; 
    int currentSum =0;

    for (int val: nums){
        currentSum += val;
        maxSum = max(currentSum , maxSum);
        
        if ( currentSum < 0){
            currentSum = 0;
        }
        
    }
    return maxSum;
}
int main(){
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};

    cout << "vector is : " ;
    for(int val:nums){
        cout<< val << " ";
    }
    cout << endl;

    cout << "Maximum Sum of subarray is : " << sumOfSubarrays(nums);
    return 0;
}