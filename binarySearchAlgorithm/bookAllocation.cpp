#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr , int n , int m, int maxAllowedPages){
    int students = 1, pages = 0;

    for(int i =0 ; i<n ;i++){   // O(n)
        if(arr[i]> maxAllowedPages) return false;

        if(pages + arr[i]<= maxAllowedPages) pages += arr[i];
        else {
            students ++ ;
            pages = arr[i] ;
            }
    }
    
    return students > m ? false : true ;
}

int bookAllocation(vector<int> &arr , int n , int m){
    if(m>n) return -1;

    int  sum=0  ;  

    for(int i =0 ; i<n ; i++){ //O(n)
        sum+=arr[i];
    }

    int   ans = -1 ,start =0 ,   end = sum ; // range of possible ans

    while(start <= end){ //O(logN * n)    N = range of possible ans
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
    vector<int> nums = {2,1,3,4};
    int n = 4, m=2 ;
    cout<< "your array is : ";
    for(int val:nums){
        cout << val << " ";
    }
    cout << endl;

    cout << "book allocation is : "<< bookAllocation(nums, n ,m);

    return 0;
}
