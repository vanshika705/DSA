#include <iostream>
#include <vector>
using namespace std;

int getMaxSum(int matrix[3][3], int rows , int col){

    int maxRowSum = INT32_MIN ;
    for(int i =0 ; i < rows; i++){

        int rowSum =0 ;
        for(int j =0 ; j < col ; j++){
            rowSum += matrix[i][j];
        }

        maxRowSum = max(maxRowSum , rowSum);
    }
    return maxRowSum;
}

int main(){

    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}} ;
    int rows = 3;
    int col = 3;
    
    cout <<"max sum of row is : " << getMaxSum(matrix,rows,col) << endl ;

    return 0;
}