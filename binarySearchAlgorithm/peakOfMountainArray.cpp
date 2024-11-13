#include <iostream>
#include <vector>
using namespace std;
int peakOfMountain(vector<int> nums){
    int start = 1 , end = nums.size() -2 ;
    int mid =0;
    while(start <= end){
        mid = start + ( end - start)/2;

        if( nums[mid-1]< nums[mid] && nums[mid]> nums[mid+1]){
            return mid;
        }
        else if(nums[mid-1] < nums[mid]){
                start= mid +1;
            }
        
        else {
                end = mid -1;
            }
    }
    return -1;
}

int main(){
    vector<int> nums = {0,3,8,9,5,2};

    cout<< "your array is : ";
    for(int val:nums){
        cout << val << " ";
    }
    cout << endl;

    cout << "index of peak element is : "<< peakOfMountain(nums);

    return 0;
}
