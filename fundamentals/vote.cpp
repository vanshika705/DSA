#include <iostream>
using namespace std;
int main(){
    int age ;
    cout<< "enter age : " ;
    cin>> age ; 
    if ( age >= 18 ){
        cout << "you can vote\n ";
    }
    else{
        cout << "you can not vote\n ";
    }
    return 0;
}