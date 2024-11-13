#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec = {1,2,3,4,5};

    vector<int> :: iterator it;
    for( it = vec.begin(); it!=vec.end(); it++){ // forward loop
        cout << *it << " ";
    }
    cout << endl;

    // vector<int> ::reverse_iterator i;
    for(auto i = vec.rbegin(); i!=vec.rend(); i++){ // backward loop
        cout << *i << " ";
    }
    cout << endl;

    
    return 0;
}