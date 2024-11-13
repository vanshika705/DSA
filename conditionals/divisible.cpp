#include <iostream>
using namespace std;
int main(){
    int num , sum = 0 , i;
    cout << "enter number : ";
    cin >> num ;
    for ( i=1 ; i<=num ; i++){
        if ( i % 3 == 0 )
        sum = sum + i ;
    }
    cout << " Sum of number divisible by 3 is : " << sum ;
    return 0;
}