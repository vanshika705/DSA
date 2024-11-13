#include <iostream>
using namespace std;
int main(){
    int num, fact = 1 ,i= 1;
    cout << "enter a number : ";
    cin >> num ;
    while( i <=num ) {
        fact = fact * i ;
        i++;
    }

    cout << "Factorial of "<< num << " is : " << fact << endl ;
    return 0;
}