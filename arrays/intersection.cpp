#include <iostream> 
using namespace std;
int intersection(int arr1[], int arr2[], int size){
    cout << " Intersection of two array is :\n ";
    for ( int i =0 ;i < size ; i++ ){
        for ( int j =0 ;j < size ; j++ ){
            if ( arr1[i] == arr2[j]){
                cout << arr1[i] << endl;
                break;
            }
        }
    }
 
    return 0;
}
int main(){
    int size = 0 ;

    int arr1[size] ;
    int arr2[size] ;
    cout << " enter the size of array  : ";
    cin >> size ;
    cout << " enter the elements of array 1 : ";
    for ( int i =0 ;i < size ; i++ ){
    cin >>  arr1[i] ;
    }
    cout << " enter the elements of array 2 : ";
    for ( int i =0 ;i < size ; i++ ){
    cin >>  arr2[i] ;
    }
    intersection(arr1 ,arr2 , size);

    return 0;

}