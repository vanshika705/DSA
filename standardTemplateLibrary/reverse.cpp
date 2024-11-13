#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    vector<int> vec = { 6,3,8,9,3};
    reverse(vec.begin(),vec.end());

    for(int val:vec){
        cout << val << " ";
    }
    cout << endl;

    reverse(vec.begin()+1,vec.begin()+3);

    for(int val:vec){
        cout << val << " ";
    }
    cout << endl;


    return 0;
}