#include<iostream>
using namespace std;

void print(int row){
    for(int i = 0 ; i < row; i++){
        cout<<'*';
    }
}

int main(){
    int row ;
    cin>> row;

    print(row);

    int j ;
    for(int i = 1 ;i < row ; i++){
        j = 0;
        if(i%2 == 0){
            cout<<'*';
            while(j < row-2) {
                cout<<' ';
                j++;
            }
            cout<<'*';
        }

        cout<<endl;
        
    }
   

    print(row);

    return 0;

}