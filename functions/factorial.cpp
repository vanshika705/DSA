#include <iostream>
using namespace std;
int factorial(int n ){
    int  fact = 1 ;
    for ( int i = 1 ; i <= n ; i++ ){
        fact *= i;
    }
    return fact ;
}
int main(){
    int a ;
    cout << " enter a number : ";
    cin >> a ;
    // pass by value 
    cout << "factorial of n number is : " << factorial(a) ;
    return 0;
}
