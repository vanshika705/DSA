#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr , int n , int m, int maxAllowedTime){
    int painters = 1, time = 0;

    for(int i =0 ; i<n ;i++){   // O(n)

        if(time + arr[i]<= maxAllowedTime) time += arr[i];
        else {
            painters ++ ;
            time = arr[i] ;
            }
    }
    
    return painters > m ? false : true ;
}

int minTimeToPaint(vector<int> &arr , int n , int m){

    int  sum=0 , maxVal=0  ;  

    for(int i =0 ; i<n ; i++){ //O(n)
        sum+=arr[i];
        maxVal = max(arr[i],maxVal);
    }

    int   ans = -1 ,start =maxVal, end = sum ; // range of possible ans

    while(start <= end){ //O(logSum * n)    N = range of possible ans
        int mid = start + (end - start)/2 ;
        
        if(isValid(arr, n, m ,mid)){ // left if valid
            ans = mid; 
            end = mid -1;
        }
        else{ // right if invalid
            start = mid +1;
        }
    }

    return ans;
}

int main(){
    vector<int> nums = {40,30,10,20};
    int n = 4, m=2 ;
    cout<< "your array is : ";
    for(int val:nums){
        cout << val << " ";
    }
    cout << endl;

    cout << "min time required to paint the boards is : "<< minTimeToPaint(nums, n ,m);

    return 0;
}
