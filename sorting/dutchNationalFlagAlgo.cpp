#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int> &arr){  
    int n = arr.size();
    int low = 0;
    int mid = 0;
    int high = n-1;
    
    while(mid<=high){ // O(n)
        if( arr[mid] == 0) {
            swap(arr[low],arr[mid]);
            mid++ ; low++;
        }
        else if(arr[mid] == 1) mid++;
        else {
            swap(arr[high],arr[mid]);
            high --;
        }
    }
}

void printArray(vector<int> &arr){
    for(int val:arr){
        cout << val << " ";
    }
    cout << endl;
}

int main(){
    
    vector<int> arr = {2,0,2,1,1,0,1,2,0,0};
    printArray(arr);
    sortColors(arr);
    printArray(arr);

    return 0;
}