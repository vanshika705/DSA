#include <iostream>
#include <vector>
using namespace std;
int rotatedSortedArray(vector<int> nums, int target){
    int start =0 , end = nums.size() -1 ;

    while(start <= end){
        int mid = start + ( end - start)/2;

        if( target == nums[mid]){
            return mid;
        }
        if(nums[start] <= nums[mid]){
            if( nums[start]<= target && target <= nums[mid]){
                end = mid +1;
            }
            else{
                start= mid -1;
            }
        }
        else {
            if( nums[mid]<= target && target <= nums[end]){
                start= mid -1;
            }
            else{
                end = mid +1;
            }
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {3,4,5,6,7,0,1,2};

    cout<< "your array is : ";
    for(int val:nums){
        cout << val << " ";
    }
    cout << endl;

    int target = 0 ;
    
    cout << "value is found at index : "<< rotatedSortedArray(nums, target);

    return 0;
}
