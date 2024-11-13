#include <iostream> 
using namespace std ;
int binaryToDecimal(int num){
    int result = 0;
    int power = 1;
    while(num > 0){
        int rem = num % 10 ;
        num = num / 10 ;
        result += rem * power ;
        power = power *2 ;
    }    
    return result ;
}

int main(){
    int num ;
    cout << " Enter a number : ";
    cin >> num ;
    cout << " Decimal number is : " << binaryToDecimal(num) ;
    return 0 ;

}