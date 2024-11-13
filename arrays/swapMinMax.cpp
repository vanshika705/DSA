#include <iostream> 
using namespace std;
int swapMinMax(int arr[], int size, int minimum, int maximum){
    for ( int i =0; i < size ; i++){
        if ( arr[i] < minimum ){
            minimum = arr[i];
        }
    }
    for ( int i =0; i < size ; i++){
        if ( arr[i] > maximum ){
            maximum = arr[i];
        }
    }
    cout << " Before swapping :\nMin is : "<< minimum << " and Max is : "<< maximum << endl; 

    int temp = minimum;
    minimum = maximum;
    maximum = temp;
    
    cout << " After swapping :\nMin is : "<< minimum << " and Max is : "<< maximum << endl;

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
    int minimum = arr[0];
    int maximum = arr[size -1];
    
    swapMinMax(arr,size,minimum,maximum);
    
    return 0;

}