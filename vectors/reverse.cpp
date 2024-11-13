#include <iostream>
#include <vector>
using namespace std;
int reverse(vector<int>& nums){
    int start = 0;
    int end = nums.size() -1 ;
    while( start < end){
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp ;
        start++ ; 
        end-- ;
    }
    for(int val:nums){
        cout<< val << " ";
    }
    cout << endl;
    
}
int main(){
    vector<int> nums;
    nums.push_back(4);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(2);
    cout << "vector is : " ;
    for(int val:nums){
        cout<< val << " ";
    }
    cout << endl;

    reverse(nums);
    return 0;
}