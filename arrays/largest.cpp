#include <iostream> 
using namespace std;
int main(){
    int nums[6] = { 5, 15, 22 , 1 , -15 , 24}  ;
    int largest = 0 ;
    
    for ( int i =0 ;i < 6 ; i++ ){
        if ( nums[i] > largest){
            largest = nums[i] ;
        }
        // largest = max( nums[i], largest);
        
    }
    cout << "Largest element in given array is  "<<  largest  ;
    

    return 0;

}