#include <iostream>
#include <vector>
using namespace std;

int singleElement(vector<int> nums){
    int  n = nums.size() , start =0 ,   end = n -1 ,;   

    if( n == 1) return nums[0];

    while(start <= end){
        int mid = start + ( end - start)/2;

        if( mid == 0 && nums[0]!=nums[1]) return nums[mid];
        
        if( mid == n-1 && nums[n-1]!=nums[n-2]) return nums[mid];

        if(nums[mid -1] != nums[mid] && nums[mid] != nums[mid+1]) return nums[mid];

        if (mid %2 ==0){ // even
            if( nums[mid -1] == nums[mid]){ // left
                end = mid -1;
            }
            else{ //right 
                start = mid +1;
            }
        }
        else { // odd
            if( nums[mid-1 ] == nums[mid]){ // right
                start = mid +1;
            }
            else{ //left
                end = mid -1;
            }
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {1,1,2,3,3,4,4,8,8};

    cout<< "your array is : ";
    for(int val:nums){
        cout << val << " ";
    }
    cout << endl;

    
    cout << "single element in array is : "<< singleElement(nums);

    return 0;
}
