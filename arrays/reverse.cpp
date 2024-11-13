#include <iostream> 
using namespace std;
void reverse(int arr[], int size ){
    int start = 0;
    int end = size -1 ;
    while( start < end){
        // swap(arr[start],arr[end]);
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp ;
        start++ ; 
        end-- ;
    }
}   

int main(){
    int size = 0 ;
    int arr[size] ;
    
    cout << " enter the size of array : ";
    cin >> size ;
    cout << " enter the elements of array : ";
    for ( int i =0 ;i < size ; i++ ){
    cin >>  arr[i] ;
    }
    cout << " your array is : ";
    for ( int i = 0 ;i < size ; i++ ){
    cout << arr[i]<< endl ;
    }
    cout << " Reverse array is : " ; 
    reverse(arr ,size ); 
    for ( int i =0 ;i < size ; i++ ){
    cout << arr[i]<< endl ;
    }

    
    return 0;

}