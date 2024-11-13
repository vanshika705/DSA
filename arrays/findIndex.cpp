#include <iostream> 
using namespace std;
int smallest(int arr[], int size){
    int  smallest = arr[0] ;
    int i , minIndex;
    for ( i =0 ;i < size ; i++ ){
        smallest = min ( arr[i], smallest);
        if ( arr[i] == smallest){
            minIndex = i ;
        }
        
    }
    cout << "Smallest element in given array is : "<< smallest << " at index : "<< minIndex <<  endl;

    return 0;

}
int largest(int arr[], int size){
    int i , maxIndex ;
    int  largest = arr[size - 1] ;
    
    for ( i =0 ;i < size ; i++ ){
        largest = max ( arr[i], largest);

        if ( arr[i] ==  largest){
            maxIndex = i ;
        }
        
    }
    cout << "Largest element in given array is : "<<  largest  << " at index : " << maxIndex <<  endl;

    return 0;

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
    smallest(arr, size);
    largest(arr, size);

    return 0;

}