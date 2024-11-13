#include <iostream>
using namespace std;
int main(){
    int num, i, j;
    cout << "enter the dimension of square : ";
    cin >> num;
    for ( i = 0 ; i<num ;i++){
        for ( j = 0 ; j<num ;j++){
            cout << "*" ;
        }
        cout << "\n" ;
    }
    return 0;
}