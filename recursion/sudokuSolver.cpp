#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<vector<char>> &board,int row,int col,char dig){
    // horizontally
    for(int j=0; j<9;j++){
        if(board[row][j] == dig) return false;
    }

    // vertically
    for(int i=0; i<9;i++){
        if(board[i][col] == dig) return false;
    }

    // grid
    int srow = (row/3)*3;
    int scol = (col/3)*3;

    for(int i=srow; i<=srow+2; i++){
        for(int j=scol; j<=scol+2; j++){
            if(board[i][j] == dig){
                return false;
            }
        }
    }

    return true;
}

bool helper(vector<vector<char>> &board,int row,int col){
    if(row == 9){ //base case
        return true;
    }

    int nextRow = row, nextCol = col;
    if(nextCol == 9){
        nextRow = row +1;
        nextCol =0;
    }

    if(board[row][col] != '.'){
        return helper(board,nextRow,nextCol);
    }

    //place the digit
    for(char dig ='1';dig<='9';dig++){
        if(isSafe(board,row,col,dig)){
            board[row][col] = dig;
            if(helper(board,nextRow,nextCol)){
                return true;
            }
            board[row][col] = '.';
        }
    }

    return false;
}

void solveSudoku(vector<vector<char>> &board){
    helper(board,0,0);
}

int main(){
    vector<vector<char>> board = {{'2','.','.','.','.','1','4','.','.'},{'7','.','.','.','9','.','.','.','.'},{'.','3','.','.','5','6','.','.','2'},{'.','7','.','2','1','8','5','.','6'},{'1','.','2','.','.','5','9','3','.'},{'.','6','.','.','9','.','.','.','.'},{'6','.','.','.','8','.','.','.','.'},{'9','.','.','5','.','3','8','.','.'},{'4','1','8','.','2','.','.','6','5'}};

    solveSudoku(board);

    for(const auto &row : board){
        for(const auto &val : row){
            cout<< val << " ";
        }
        cout<< endl;
    }
    cout<< endl;


    return 0;
}

