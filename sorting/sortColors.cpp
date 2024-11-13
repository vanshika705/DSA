#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int> &arr){  
    int n = arr.size();
    int countOfZeros = 0;
    int countOfOnes = 0;
    int countOfTwos = 0;

    for(int i =0 ; i< n ; i++){ // O(n)
        if( arr[i] == 0) countOfZeros++;
        else if( arr[i] == 1) countOfOnes++;
        else countOfTwos++; 
    }

    // O(n)
    int idx =0;
    for(int i=0 ; i<countOfZeros; i++){
        arr[idx++] = 0;
    } 
    for(int i=0 ; i<countOfOnes; i++){
        arr[idx++] = 1;
    }
    for(int i=0 ; i<countOfTwos; i++){
        arr[idx++] = 2;
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