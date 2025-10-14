#include<iostream>
using namespace std;

int main(){
    int row ;
    cin>> row;

    for(int i = 0 ; i < row/2 +1 ; i++){
        for(int j = 0 ; j <= row/2 -i ; j++){
            cout<<' ';
        }
        for(int j= row/2 + 1 -i; j <= row/2 +1  ; j++){
            cout<<'*';
        }
        for(int j = 0 ; j < i ; j++){
            cout<<'*';
        }
        cout<<endl;
    }

    for(int i = 0 ; i < row/2; i++){
        for(int j = 0 ; j <=i+1; j++){
            cout<<' ';
        }
        for(int j= i; j < row/2-i+1 ; j++){
            cout<<'*';
        }
        cout<<endl;
    }

    return 0;

}