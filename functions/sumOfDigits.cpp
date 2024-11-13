#include <iostream>
using namespace std;
int sumOfDigits(int num ){
    int sum = 0 ;
    while (num > 0){
    int rem = num % 10 ;
    num  /= 10 ;
    sum += rem ;
    }
    return sum ;

}
int main(){
    int num   ;
    cout << " enter a number : ";
    cin >> num ;
    cout << " sum of digits is : " << sumOfDigits(num) << endl ;
    return 0;
}