#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);

    
    // while(!s.empty()){
    //     cout<< s.top()<< " ";
    //     s.pop();
    // }
    // cout << endl;


    stack<int> s2;

    s2.swap(s);

    cout << s.size() << endl;
    cout << s2.size() << endl;


    return 0;
}