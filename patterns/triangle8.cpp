#include <iostream>
using namespace std;
int main(){
    int n ,i,j;
    cout << "enter number of rows : ";
    cin >> n;
    char ch = 'A';
    for (i =0; i<n; i++){
        for (j =0; j<i; j++){
            
            cout << " " ;
        }
        for (j =0; j<n-i; j++){
            
            cout << ch  ;
        }
        ch = ch + 1;
        cout << endl;
    }
    return 0;
}