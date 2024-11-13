#include <iostream>
#include <vector>
using namespace std;

int GCD(int a, int b){

    while(a > 0 && b > 0){

        if(a>b) {
            a = a % b;
        }
        else{
            b = b % a;
        }
       
    }
    if( a == 0 ) return b ;
    else return a;
}

int LCM(int a, int b){
    int gcd = GCD(a, b);
    return ( a * b)/ gcd ;

}

int main(){
    int a  , b;
    cout << "enter number 1 : ";
    cin >>  a ;
    cout << "enter number 2 : ";
    cin >>  b ;

    cout << "GCD is : " << GCD(a,b)<< endl;
    cout << "LCM is : " << LCM(a,b)<< endl;


    return 0;
}