#include <iostream>
#include <list>
using namespace std;

void printList(list<int> l){
    for(int val:l){
        cout << val << " ";
    }
    cout << endl;
}

int main(){
    list<int> l ;

    l.emplace_back(4);
    l.push_back(5);

    l.push_front(6);
    l.push_front(2);

    printList(l);

    l.pop_back();
    l.pop_front();

    printList(l);

    return 0;
}