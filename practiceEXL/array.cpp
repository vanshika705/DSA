#include <bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> &arr, int n){
    if(n < 2) return -1;

    int largest = INT_MIN , second = INT_MIN;
    for(int i = 0; i <n; i++){
        if(arr[i] > largest){
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > second){
            second = arr[i];
        }

    }

    if (second == INT_MIN) return -1;

    return second;

}
int main() {
    int n;
    cin>> n;

    vector<int> arr(n);
    for(int i = 0; i < n ; i++){
        cin >> arr[i];
    }
    
    cout<< secondLargest(arr, n);
    return 0;
}