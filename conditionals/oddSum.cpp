#include <iostream>
using namespace std;
int main(){
    int num , sum = 0 , i;
    cout << "enter number : ";
    cin >> num ;
    for ( i=1 ; i<=num ; i++){
        if ( i % 2 != 0 )
        sum = sum + i ;
    }
    cout << " Sum of odd number is : " << sum ;
    return 0;
}