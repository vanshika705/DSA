#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

int partition(vector<int>  &arr, int st , int end){ //O(n)
    int idx =st-1, pivot =arr[end];

    for(int j =st;j<end;j++){
        if(arr[j] <=pivot){   // for descending >= 
            idx++;
            swap(arr[j],arr[idx]);
        }
    }

    idx++;
    swap(arr[idx],arr[end]);
    return idx;
    
}

void quickSort(vector<int> &arr, int st , int end){
    if(st <end){
        int pivIdx = partition(arr,st,end);

        quickSort(arr,st,pivIdx-1); //left
        quickSort(arr,pivIdx+1,end); //right

    }
}

int main(){
    vector<int> arr = {5,2,6,4,1,3};

    quickSort(arr,0,arr.size()-1);
  
    for(int val :arr){
            cout<<val<< " ";
    }
    cout<<endl;

    return 0;
}

