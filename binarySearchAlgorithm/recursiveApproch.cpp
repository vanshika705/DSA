#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> nums, int target, int start , int end){
    
    if ( start <= end){
        int mid = start + ( end - start)/2;

        if(target > nums[mid]){
            return binarySearch(nums, target, mid +1, end);
        }
        else if(target < nums[mid]){
            return binarySearch(nums, target, start, mid-1);
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

    int start = 0 , end = nums.size() -1;

    cout << "value is found at index : "<< binarySearch(nums, target, start , end);

    return 0;
}
