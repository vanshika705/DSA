#include <iostream>
using namespace std;
void checkPrime(int n ){
    int  i = 2;
    
    while( i < n) {
        if ( n % i == 0 ){
            return false ;
            break ;
        }
        else if ( n % i != 0){
            return true ; 
            i++ ;
        }
    }
    // if (n % (i -1) != 0){
    //     cout << n <<" is a prime number\n ";
    // }
}
int sum(int n ){
    int i = 2 ; 
    while ( i < n ){
        if (checkPrime(n) == true){
            sum += 2 ;
            i ++ ;
        }
    }
} 
int main(){
    int n ;
    cout << "enter  a number : ";
    cin >> n;
    cout << sum(n) ;

    return 0;
}