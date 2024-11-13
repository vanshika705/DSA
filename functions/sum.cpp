#include <iostream>
using namespace std;
int sum(int a , int b){
    int c = a + b;
    cout << " sum is : " << c  ;
}
int main(){
    int a , b ;
    cout << "enter  1st number  : " ;
    cin >> a ;
    cout << "enter  2nd number  : " ;
    cin >> b ;
    sum(a, b);
    return 0;
}