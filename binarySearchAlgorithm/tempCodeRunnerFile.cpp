#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int isPossible(vector<int> &arr, int N , int C, int minAllowedDistance){ // O(N)
    int cows =1, lastStallPosition = arr[0];

    for(int i =0; i < N ; i++){
        if(arr[i] - lastStallPosition >= minAllowedDistance){
            lastStallPosition = arr[i];
            cows++;
        }

        if(cows == C) return true;
    }
    return false;

}
int getDistance(vector<int> &arr, int N , int C){

    sort(arr.begin(), arr.end()); // NlogN

    int start = 1 , end = arr[N-1] - arr[0], ans = -1;

    while(start <= end){ // O(log(range) * N)
        int mid = start + (end - start )/2;

        if(isPossible(arr,N,C,mid)){ // right
            ans = mid;
            start = mid +1;
        }
        else end = mid -1; // left

    }
    return ans;

}

int main(){
    vector<int> arr = {1,2,8,4,9};
    int N = 5, C  = 3;
    for(int val:arr){
        cout<< val<< " ";
    }
    cout << endl;

    cout<< "Largest minimum distance between cows is : "<<  getDistance(arr, N, C);

    return 0;

}