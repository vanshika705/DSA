#include <iostream>
#include <vector>
using namespace std;
// Brute force approach
int sumOfSubarrays(vector<int>& nums){
    int maxSum =0;
    for (int start = 0; start < nums.size(); start ++){
        int currentSum =0;
        for ( int end = start ; end < nums.size(); end ++){
            currentSum += nums[end];
            maxSum = max(currentSum , maxSum);
        }
        cout << endl;
    }
    return maxSum;
}
int main(){
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);

    cout << "vector is : " ;
    for(int val:nums){
        cout<< val << " ";
    }
    cout << endl;


    cout << "Maximum Sum of subarray is : " << sumOfSubarrays(nums);
    return 0;
}