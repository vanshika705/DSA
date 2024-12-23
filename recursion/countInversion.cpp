#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

int countInversion(vector<int>  &arr, int st ,int mid, int end){ //O(n)
    vector<int> temp;
    int i =st, j =mid+1;
    int invCount = 0;

    while(i <=mid && j<=end){
        if(arr[i] <=arr[j]){   
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
            invCount += (mid-i+1);
        }
    }

    while(i <=mid){
        temp.push_back(arr[i]);
        i++;
    }

    while(j <=end){
        temp.push_back(arr[j]);
        j++;
    }

    for(int idx =0; idx<temp.size();idx++){
        arr[idx+st] = temp[idx];
    }

    return invCount;

}

int mergeSort(vector<int> &arr, int st , int end){
    if(st <end){
        int mid = st + (end-st)/2;

        int leftInvCount = mergeSort(arr,st,mid); //left
        int rightInvCount = mergeSort(arr,mid+1,end); //right

        int invCount = countInversion(arr,st,mid,end);

        return invCount + leftInvCount + rightInvCount;
    }

    return 0;
}

int main(){
    vector<int> arr = {6,3,5,2,7};

    int ans = mergeSort(arr,0,arr.size()-1);
  
    cout<< "inversion count : "<< ans << endl;

    return 0;
}

