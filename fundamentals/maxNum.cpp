#include <iostream>
using namespace std;
int main(){
    int num1, num2;
    cout << "enter number 1 :" << endl;
    cin >> num1 ;
    cout << "enter number 2 :" << endl;
    cin >> num2 ;
    if ( num1 > num2){
        cout << num1 << " is greater than "<< num2 << endl;
    }
    else {
        cout << num2 << " is greater than "<< num1 << endl;
    }
    return 0;
}