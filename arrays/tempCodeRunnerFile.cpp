#include <iostream> 
using namespace std;
int unique(int arr[], int size){
    cout << "unique elements are :" ;
    for ( int i =0  ;i < size ; i++ ){
        for ( int j =0  ;j< size ; j++ ){
            
            if ( arr[i] != arr[j]){
                if ( j == size-1 ){
                    cout << arr[i] << endl ;
                }
            }
            else if( i== size-1 ){
                for ( int j = 0 ; j < i ; j++){
                    if ( arr[i] != arr[j]){
                        if ( j == i-1 ){
                    cout << arr[i] << endl ;
                }
            }
                }

            }
        }

    }
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
    unique(arr , size);

    return 0;

}