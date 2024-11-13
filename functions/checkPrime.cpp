#include <iostream>
using namespace std;
void checkPrime(int n ){
    int  i = 2;
    
    while( i < n) {
        if ( n % i == 0 ){
            cout << n <<" is not a prime number\n ";
            break ;
        }
        else if ( n % i != 0){
            i++ ;
        }
    }
    if (n % (i -1) != 0){
        cout << n <<" is a prime number\n ";
    }
 
}
int main(){
    int n ;
    cout << "enter  a number : ";
    cin >> n;
    checkPrime(n) ;

    return 0;
}