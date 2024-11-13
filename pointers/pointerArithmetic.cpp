#include <iostream>
using namespace std;
int main(){
    // increment decrement
    int a =5;
    int *p = &a;
 
    cout << p << endl;
    p++ ;
    cout << p<< endl;
    p-- ;
    cout << p<< endl;
    p = p + 2 ;
    cout << p<< endl;

    // addition subtraction
    int arr[] = { 1,2,3,4,5};

    cout << *arr << endl;
    cout << *(arr + 1) << endl;


    int * ptr2 ;
    int * ptr1 = ptr2 + 2 ;

    cout << ptr1 - ptr2 << " bytes"<< endl;

    // compare 
    cout << (ptr1 > ptr2) << endl;

    return 0;
}

