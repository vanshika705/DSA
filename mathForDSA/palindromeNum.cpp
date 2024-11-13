#include <iostream>
#include <vector>
using namespace std;

int reverse(int n){

    int revNum =0;

    while( n != 0){
        int digit = n % 10 ;

        if(revNum > INT32_MAX/10  || revNum < INT32_MIN/10) return 0;
        
        revNum = ( revNum * 10) + digit;
        n = n/ 10;
    }
    return revNum;
}

bool isPalindrome(int n ){
    if( n < 0 ) return false;

    int revNum = reverse(n);
    return n == revNum ;
}

int main(){
    int a  ;
    cout << "enter number  : ";
    cin >>  a ;
    
    if(isPalindrome(a)) cout << "number is palindrome ";
    else cout << "number is not palindrome ";
    


    return 0;
}