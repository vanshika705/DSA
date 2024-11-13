#include <iostream>
using namespace std;
int main(){
    int num1 , num2 , choice , result ;
    cout << "Enter number 1 : ";
    cin >> num1 ;
    cout << "Enter number 2 : ";
    cin >> num2 ;
    cout << "Enter 1 for Addition   \nEnter 2 for Subtraction  \nEnter 3 for Multiplication  \nEnter 4 for Division  \nEnter 5 for Modulus \n" ;
    cout << "Enter your choice : ";
    cin >> choice ;
    if ( choice == 1){
        result = num1 + num2;
    }
    else if ( choice == 2){
        result = num1 - num2;
    } 
    else if ( choice == 3){
        result = num1 * num2;
    } 
    else if ( choice == 4){
       result = num1 / num2;
    } 
    else if ( choice == 5){
        result = num1 % num2;
    }
    cout << "Your answer is : " << result ;
    
    return 0;
}