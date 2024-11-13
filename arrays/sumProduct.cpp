#include <iostream> 
using namespace std;
int sum(int arr[], int size){
    int sum = 0 ;
    int product = 1 ;
    for ( int i =0; i <size ; i++){
        sum += arr[i];
        product *= arr[i];
    }
    cout << " Sum of elements of array is : "<< sum << endl  ;
    cout << " Product of elements of array is : "<< product << endl  ;
    return 0 ;
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
    sum(arr, size);

    return 0;

}