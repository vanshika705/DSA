#include <iostream>
#include <vector>
using namespace std;



bool isArmstrong(int n){
    int copy = n;
    int sumOfCubes = 0;

    while(n != 0){
        int digit = n% 10;
        sumOfCubes += (digit * digit* digit) ;
        n = n / 10;
    }
    return sumOfCubes == copy;
   
}

int main(){
    int n ;
    cout << "enter a number : ";
    cin >>  n ;

    if(isArmstrong(n)){
        cout << "is an armstrong number";
    }    
    else cout << "not an armstrong number";

    return 0;
}