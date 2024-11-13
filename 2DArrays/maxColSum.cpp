#include <iostream>
#include <vector>
using namespace std;

int getMaxSum(int matrix[3][3], int rows , int col){

    int maxColSum = INT32_MIN ;
    for(int i =0 ; i < col; i++){

        int colSum =0 ;
        for(int j =0 ; j < rows ; j++){
            colSum += matrix[j][i];
        }
        
        maxColSum = max(maxColSum , colSum);
    }
    return maxColSum;
}

int main(){

    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}} ;
    int rows = 3;
    int col = 3;
    
    cout <<"max sum of column is : " << getMaxSum(matrix,rows,col) << endl ;

    return 0;
}