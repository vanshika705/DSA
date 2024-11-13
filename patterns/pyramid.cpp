#include <iostream>
using namespace std;
int main(){
    int n ,i,j;
    cout << "enter number of rows : ";
    cin >> n;
    
    for (i =0; i<n; i++){
        // for spaces
        for (j =0; j<n-i-1; j++){
            
            cout << " ";
        }
        // for 1st triangle 
        for (j =1; j<=i+1 ; j++){
            
            cout << j ;
        }
        // for 2nd triangle 
        for (j=i; j>0; j--){
            
            cout << j ;
        }
        cout << endl;
    }
    return 0;
}