#include <iostream>
#include <vector>
using namespace std;

int sumOfSubarrays(vector<int>& nums){
    int maxSum =0; 
    int currentSum =0;

    for (int val: nums){
        currentSum += val;
        maxSum = max(currentSum , maxSum);
        
        if ( currentSum < 0){
            currentSum = 0;
        }
        
        cout << endl;
    }
    return maxSum;
}
int main(){
    vector<int> nums;
    nums.push_back(-2);
    nums.push_back(1);
    nums.push_back(-3);
    nums.push_back(4);
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(-5);
    nums.push_back(4);

    cout << "vector is : " ;
    for(int val:nums){
        cout<< val << " ";
    }
    cout << endl;

    cout << "Maximum Sum of subarray is : " << sumOfSubarrays(nums);
    return 0;
}