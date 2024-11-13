#include <iostream>
#include <vector>
using namespace std;

void printDigits(int n){

    while(n!=0){
        int digit= n % 10;
        cout << digit << " ";

        n = n/10;
    }
    cout << endl;
}

int countDigits(int n){
    int count = 0;

    while(n!=0){
        int digit= n % 10;
        count ++;
        n = n/10;

    }
    return count;
}

int sumDigits(int n){
    int sum = 0;

    while(n!=0){
        int digit= n % 10;
        sum += digit;
        n = n/10;

    }
    return sum;
}

int main(){
    int n ;
    cout << "enter a number : ";
    cin >>  n ;

    cout <<"digits are : ";
    printDigits(n) ;
    cout <<"count is : "<<  countDigits(n) << endl;
    cout <<"sum is : " << sumDigits(n)<< endl;


    return 0;
}