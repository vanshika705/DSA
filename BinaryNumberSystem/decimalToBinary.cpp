#include <iostream> 
using namespace std ;
int decimalToBinary(int num){
    int result = 0;
    int power = 1;
    while(num > 0){
        int rem = num % 2 ;
        num = num / 2 ;
        result += rem * power ;
        power = power *10 ;
    }    
    return result ;
}

int main(){
    int num ;
    cout << " Enter a number : ";
    cin >> num ;
    cout << " Binary number is : " << decimalToBinary(num) ;
    return 0 ;

}