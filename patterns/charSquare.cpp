#include <iostream>
using namespace std;
int main(){
    int n ,i,j;
    cout << "enter number of rows : ";
    cin >> n;
  
    for (i =1; i<=n; i++){
        char ch = 'A';
        for (j =1; j<=n; j++){
            cout << ch << " ";
            ch = ch +1 ;
        }
        cout << endl;
    }
    return 0;
}