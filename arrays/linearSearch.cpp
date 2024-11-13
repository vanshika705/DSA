#include <iostream> 
using namespace std;
int linearSearch(int arr[] , int size, int target){
    for ( int i =0 ;i < size ; i++ ){
        if ( arr[i] == target)
            cout << "target element is found at index : " << i  ;
    }
    return 0 ; 
}
int main(){
    int size = 0 ;
    int arr[size] ;
    int target = 0 ;
    cout << " enter the size of array : ";
    cin >> size ;
    cout << " enter the elements of array : ";
    for ( int i =0 ;i < size ; i++ ){
    cin >>  arr[i] ;
    }
    cout << " enter the  target element : ";
    cin >> target ;
    linearSearch(arr, size, target);
    return 0;

}