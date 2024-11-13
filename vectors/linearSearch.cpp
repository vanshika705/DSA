#include <iostream>
#include <vector>
using namespace std;
int linearSearch(vector<int>& nums , int element){
    
    for ( int val : nums){
        if (val == element) {
            cout << "Searched element is found " << endl ;       
        }
    }
   
    return 0;
}
int main(){
    vector<int> nums;
    nums.push_back(4);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(5);
    cout << "vector is : " ;
    for(int val:nums){
        cout<< val << " ";
    }
    cout << endl;

    int element ;
    cout << "enter element to search : ";
    cin >> element;
    cout << endl;
    linearSearch(nums, element);
    return 0;
}