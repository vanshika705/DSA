#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec = {0,0,1,1,1,2,2};

    cout << " before : "<< vec.size()<< " " << vec.capacity() << endl;

    vec.pop_back();
    vec.pop_back();
    
    for(int val:vec){
        cout<< val << " ";
    }
    cout << endl;

    cout << " after : "<< vec.size()<< " " << vec.capacity();



    return 0;
}