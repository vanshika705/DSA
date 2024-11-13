#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int> nums, int target){
    int start = 0 , end = nums.size() -1;
    int mid = 0;
    while(start <= end){
        mid = start + (end - start)/2;

        if(target > nums[mid]){
            start = mid +1;
        }
        else if(target < nums[mid]){
            end = mid -1;
        }
        else{
            return mid ;
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {-1,0,3,4,5,9,12};

    cout<< "your array is : ";
    for(int val:nums){
        cout << val << " ";
    }
    cout << endl;
    
    int target;
    cout << "enter target value : ";
    cin >> target ;

    cout << "value is found at index : "<< binarySearch(nums, target);

    return 0;
}
