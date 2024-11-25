#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// brute approch
// int subarraySum(vector<int>& vec, int k ){ // tc = O(n ^ 2) , sc = O(1) 
//     int count = 0;
//     int n = vec.size();

//     for(int i = 0 ; i< n ; i++){ // starting point
//         int sum =0 ;

//         for(int j = i ; j<n ; j++){ // endling point
//             sum += vec[j] ;

//             if(sum == k ){
//                 count ++ ;
//             }
//         }
//     }
    
//     return count;
// } 

// optimal approch 
int subarraySum(vector<int>& vec, int k ){  // O(n) ( tc and sc)
    int count = 0;  
    int n = vec.size();

    vector<int> prefixSum(n,0);

    prefixSum[0] = vec[0];

    for(int i = 0 ; i< n ; i++){
        prefixSum[i] = prefixSum[i-1] + vec[i];
    }

    unordered_map<int,int> m ; //ps , frequency

    for(int j = 0 ; j<n ; j++){
        if(prefixSum[j] == k) count ++ ;

        int val = prefixSum[j] - k ; // ps[i-1]
        if(m.find(val) != m.end()){ // exist karti he
            count += m[val];
        }

        if(m.find(prefixSum[j]) == m.end()){ // not exist
            m[prefixSum[j]] = 0;
        }
        m[prefixSum[j]] ++ ;
    }
    
    return count;
}

int main(){
    vector<int> vec = {9,4,20,3,10,5};

    int target= 33;

    for(int val:vec){
        cout << val << " ";
    }
    cout << endl;

    cout<< "total sub arrays are : " << subarraySum(vec, target);
    

    return 0;
}
