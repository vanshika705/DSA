#include <iostream>
#include <vector>
using namespace std;

int reverseNumber(int n){

    int revNum =0;

    while( n != 0){
        int digit = n % 10 ;

        if(revNum > INT32_MAX/10  || revNum < INT32_MIN/10) return 0;

        revNum = ( revNum * 10) + digit;
        n = n/ 10;

    }
    return revNum ;

    
}

int main(){
    int a  ;
    cout << "enter number  : ";
    cin >>  a ;
    
    cout << "reverse number is : " << reverseNumber(a)<< endl;
    


    return 0;
}