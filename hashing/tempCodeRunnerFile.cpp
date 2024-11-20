#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int subarraySum(vector<int>& vec, int k ){
    int count = 0;
    int n = vec.size();

    for(int i = 0 ; i< n ; i++){
        int sum =0 ;

        for(int j = i ; j<n ; j++){
            sum += vec[j] ;

            if(sum == k ){
                count ++ ;
            }
        }
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
