#include <iostream> 
using namespace std;
void changeX(int arr[] , int size){
    cout << " array in function  : ";

    for ( int i =0 ;i < size ; i++ ){
        arr[i] = 2 * arr[i];
        cout <<   arr[i] << endl;
    }
}
int main(){
    int size = 0;
    int arr[size];
    cout << " enter the size of array : ";
    cin >> size ;
    cout << " enter the elements of array : ";
    for ( int i =0 ;i < size ; i++ ){
        cin >>  arr[i] ;
    }
    cout << " array in main  : ";
    for ( int i =0 ;i < size ; i++ ){
        cout <<   arr[i] << endl;
    }
    changeX(arr, size);

    return 0;

}