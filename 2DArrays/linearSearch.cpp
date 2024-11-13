#include <iostream>
#include <vector>
using namespace std;

pair<int,int> linearSearch(int matrix[3][3], int rows , int col, int key){

    for(int i =0 ; i < rows; i++){
        for(int j =0 ; i < col ; j++){
            if ( key == matrix[i][j])
                return {i,j} ;
        }
    }
    return {-1,-1};
}

int main(){

    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}} ;
    int rows = 3;
    int col = 3;
    int key ;

    cout << "enter key : ";
    cin>> key;
    
    cout << "pair of row and col index is : " ;
    cout << linearSearch(matrix,rows,col,key).first << " "<< linearSearch(matrix,rows,col,key).second << endl ;

    return 0;
}