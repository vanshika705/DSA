#include <iostream>
using namespace std;
int sumN(int n ){
    int sum = 0 ;
    for ( int i = 0 ; i <= n ; i++ ){
        sum += i;
    }
    return sum ;
}
int main(){
    int a ;
    cout << " enter a number : ";
    cin >> a ;
    cout << "sum of n number is : " << sumN(a) ;
    return 0;
}