#include <iostream>
using namespace std;
int changeX(int x ){
    x *=2 ;  ;
    cout << " x = " << x << endl ;
}
int main(){
    int x   ;
    cout << " enter a number : ";
    cin >> x ;
    changeX(x);
    cout << " x = " << x << endl ;
    return 0;
}