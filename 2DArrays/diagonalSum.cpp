#include <iostream>
#include <vector>
using namespace std;

int getSum(int matrix[3][3], int n){

    int sum =0 ;

    // primary diagonal = i = j 
    // secondary diagonal = j = n-i-1 

    for(int i =0 ; i < n ; i++){
        sum += matrix[i][i]; 

        if(i != n -i - 1){
        sum += matrix[i][n-i-1];
        }
    }

    return sum;
}

int main(){

    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}} ;
    int n= 3;
    
    cout <<"diagonal sum is : " << getSum(matrix,n) << endl ;

    return 0;
}