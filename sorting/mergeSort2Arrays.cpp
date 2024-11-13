#include <iostream>
#include <vector>
using namespace std;

void mergeSort(vector<int> &arr1,int m, vector<int> &arr2, int n){  //O(m+n)
    
    int idx = m+n-1;
    int i = m-1;
    int j = n-1;
    
    while(i>=0 && j>=0){ 
        if( arr1[i] > arr2[j]) {
            arr1[idx--] = arr1[i--];
        }
        else {
            arr1[idx--] = arr2[j--];
        }
    }

    while(j>=0){
        arr1[idx--]=arr2[j--];
    }
}

void printArray(vector<int> &arr1){
    for(int val:arr1){
        cout << val << " ";
    }
    cout << endl;
}

int main(){
    
    vector<int> arr1 = {1,2,3,0,0,0};
    vector<int> arr2 = {2,5,6};

    int n = 3;
    int m = 3;

    mergeSort(arr1,m,arr2,n);
    printArray(arr1);

    return 0;
}