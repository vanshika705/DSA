#include <iostream>
using namespace std;
int main(){
    int num, i, j;
    cout << "enter the number : ";
    cin >> num;
    for ( i = 0 ; i<num ;i++){
        for ( j = 0 ; j<num ;j++){
            cout << "*\t" ;
        }
        cout << "\n" ;
    }
    return 0;
}