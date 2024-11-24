#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& arr, int target,int st, int end ){ // recursive function
    
    if(st <= end){ 
        int mid = st + (end - st)/2;

        if(arr[mid] == target) return mid;
        else if( arr[mid] <= target) {
            return binarySearch(arr, target, mid+1, end);
        }
        else { 
            return binarySearch(arr, target, st, mid-1);
        }
    }

    return -1;
}

int main(){
    vector<int> arr = {-1,0,3,5,9,12};
    int target = 9;

    int st = 0, end = arr.size()-1;
    cout << binarySearch(arr, target,st, end ) << endl;
    return 0;
}