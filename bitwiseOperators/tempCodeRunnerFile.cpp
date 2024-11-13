# include <iostream>
using namespace std ;
int reverse(int num){
    int rem ;
    int reverseNum =0 ;
    while(num > 0){
        rem = num% 10 ;
        num = num /10 ;
        reverseNum = reverseNum * 10 +rem ;
    }
    cout << " reverse number is : "<< reverseNum ;
    return 0;
}
int main(){
    int num;
    cout<< "enter a number : ";
    cin >> num ;
    reverse(num);
    return 0 ;
}