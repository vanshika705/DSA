#include <iostream> 
using namespace std;
int main(){
    int nums[6] = { 5, 15, 22 , 1 , -15 , 24}  ;
    int  smallest = nums[0] ;
    
    for ( int i =0 ;i < 6 ; i++ ){
        if ( nums[i] < smallest){
            smallest = nums[i] ;
        }
        // smallest = min ( nums[i], smallest);
        
    }
    cout << "Smallest element in given array is : "<<  smallest ;

    return 0;

}