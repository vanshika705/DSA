#include <iostream> 
using namespace std;
int main(){
    int size = 0 ;
    int marks[size] ;
    cout << " enter the size of array : ";
    cin >> size ;
    cout << " enter the elements of array : ";
    for ( int i =0 ;i < size ; i++ ){
    cin >>  marks[i] ;
    }
    cout << " your array is : ";
    for ( int i =0 ;i < size ; i++ ){
    cout << marks[i]<< endl ;
    }

    return 0;

}