#include <iostream>
using namespace std;
int main(){
    int n , i = 2;
    cout << "enter number : ";
    cin >> n;
    while( i*i  <= n ) {
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
  

    return 0;
}