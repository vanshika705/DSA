#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){
    priority_queue<int> q;

    q.push(5);
    q.push(3);
    q.push(10);

    
    while(!q.empty()){
        cout<< q.top()<< " ";
        q.pop();
    }
    cout << endl;

    priority_queue<int, vector<int> , greater <int>> q1;

    q1.push(5);
    q1.push(3);
    q1.push(10);

    
    while(!q1.empty()){
        cout<< q1.top()<< " ";
        q1.pop();
    }
    cout << endl;

    


    return 0;
}