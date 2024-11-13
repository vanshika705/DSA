#include <iostream>
#include <unordered_set>
#include <set>

using namespace std;

int main(){
    set<int> s;

    s.insert(4);
    s.insert(6);
    s.insert(3);
    s.insert(6);
    s.insert(1);
    s.insert(9);
    s.insert(5);

    
    cout << s.size() << endl; //6
    cout << *(s.lower_bound(4)) << endl; //4
    cout << *(s.upper_bound(4)) << endl; //5



    for(auto val: s){
            cout<< val << " " ;
    }
    cout << endl;

    multiset<int> ms;

    ms.insert(4);
    ms.insert(6);
    ms.insert(3);
    ms.insert(6);
    ms.insert(1);
    ms.insert(9);
    ms.insert(5);

    
    for(auto val: ms){
            cout<< val << " " ;
    }
    cout << endl;
    
    unordered_set<int> us;

    us.insert(4);
    us.insert(6);
    us.insert(3);
    us.insert(6);
    us.insert(1);
    us.insert(9);
    us.insert(5);

    
    for(auto val: us){
            cout<< val << " " ;
    }
    cout << endl;


    return 0;
}