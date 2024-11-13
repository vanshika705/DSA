#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void nextPermutation(vector<int> &arr){  //O(m+n)
    
    // 1st step : find pivot
    int pivot = -1, n = arr.size();

    for(int i =n-1 ; i>=0 ; i--){
        if (arr[i] < arr[i+1]){
            pivot = i;
            break;
        }
    }

    if(pivot == -1){
        reverse(arr.begin(),arr.end()); // in place changes
        return;
    }

// 2nd step : next larger element 

    for(int i = n-1 ; i> pivot ; i--){
        if(arr[i]>arr[pivot]){
            swap(arr[i],arr[pivot]);
            break;
        }
    }

// 3rd step : reverse ( pivot+1 to n-1)
// reverse(arr.begin() + pivot +1 , arr.end());

    int i = pivot +1 , j = n-1;

    while(i<=j){
        swap(arr[i++],arr[j--]);
    }

}

void printArray(vector<int> &arr){
    for(int val:arr){
        cout << val << " ";
    }
    cout << endl;
}

int main(){
    
    vector<int> arr = {1,2,3,6,5,4};


    printArray(arr);
    nextPermutation(arr);
    printArray(arr);

    return 0;
}