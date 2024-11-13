#include <iostream>
#include <vector>
using namespace std;
int singleNumber(vector<int>& nums){
    int ans = 0;
    for ( int val : nums){
        ans = ans ^ val;
    }
    return ans;
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

    cout << "Single value is : " << singleNumber(nums);
    return 0;
}