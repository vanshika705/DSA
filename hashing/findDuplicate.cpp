#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int findDuplicate(vector<int>& arr){
    int slow = arr[0] , fast = arr[0] ;

    do{
        slow = arr[slow]  ; // +1
        fast = arr[arr[fast]] ; // +2
    }while(slow!=fast);

    slow= arr[0];

    while(slow != fast){
        slow = arr[slow]  ; // +1
        fast = arr[fast] ; // +1
    }

    return slow;
}

int main(){
    vector<int> vec = {3,1,3,4,2};

    for(int val:vec){
        cout << val << " ";
    }
    cout << endl;

    cout<< "duplicate value is : "<< findDuplicate(vec);
    

    return 0;
}
