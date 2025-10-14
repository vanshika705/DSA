#include<iostream>
using namespace std;

int main(){
    int row ;
    cin>> row;

    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < i ; j++){
            cout<<' ';
        }
        for(int j= i; j <= row-i+2 ; j++){
            cout<<'*';
        }
        cout<<endl;
    }
    return 0;
}









