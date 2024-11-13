#include <iostream>
using namespace std;
int fibonacci(int n ){
    int element = 0 ; 
    for ( int i = 0 ; i < n ; i++){
        if ( i == 0){
            element = 0 ;
        }
        else {
        element = i + ( i - 1) ;
        }
    }
    return element;
    
 
}
int main(){
    int n ;
    cout << "enter the position at which you want to know the number in fibonacci series : ";
    cin >> n;
    cout << "element in fiboancci series is  : " << fibonacci(n) ;

    return 0;
}