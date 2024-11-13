#include <iostream>
using namespace std;
int main(){
    int n ,i,j;
    cout << "enter number of rows : ";
    cin >> n;
    char ch = 'A';
    for (i =1; i<=n; i++){
        for (j =1; j<=i; j++){
            cout << ch << " " ;
            ch += 1;
        }
        cout << endl;
    }
    return 0;
}