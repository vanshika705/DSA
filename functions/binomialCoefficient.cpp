#include <iostream>
using namespace std;

//  n!
int factorialN(int n ){
    int  fact = 1 ;
    for ( int i = 1 ; i <= n ; i++ ){
        fact *= i;
    }
    return fact ;
    }

// r!
int factorialR(int r ){
        int  fact = 1 ;
        for ( int i = 1 ; i <= r ; i++ ){
            fact *= i;
        }
        return fact ;
    }

// (n - r)!
int factorial(int n , int r ){
        int  fact = 1 ;
        for ( int i = 1 ; i <= (n - r) ; i++ ){
            fact *= i;
        }
        return fact ;
    }

int binomialCoefficient(int n , int r ){
    int result = factorialN(n) / (factorialR(r) * factorial(n , r ));
    return result ;
}

int main(){
    int n , r  ;
    cout << " enter value of n : ";
    cin >> n ;
    cout << " enter value of r : ";
    cin >> r ;
    cout << " Binomial coefficient is  :  " << binomialCoefficient(n , r) << endl ;
    return 0;
}