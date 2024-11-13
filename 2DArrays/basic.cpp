#include <iostream>
#include <vector>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5}; // 1d array

    int martix[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}} ;  // 2d array 
    int rows = 4;
    int col = 3;

    cout << "enter matrix elements : ";
    for(int i =0 ; i <rows ; i++){
        for(int j =0; j <col ; j++){
            cin>> martix [i][j] ;
        }
    }

    martix[2][1] = 18;
    cout << martix[2][1] << endl;

    cout << "matrix is : ";

    for(int i =0 ; i <rows ; i++){
        for(int j =0; j <col ; j++){
            cout << martix [i][j] << " ";
        }
        cout << endl;
    }

    
    return 0;
}