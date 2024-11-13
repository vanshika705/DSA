#include <iostream>
using namespace std;
int main(){
    char ch ;
    cout << "Enter alphabet :";
    cin >> ch;
    if ( ch >= 65 &&  ch <= 90 ) {
        cout << "Alaphabet is in uppercase\n";
    }
    else{
        cout << "Alaphabet is in lowercase\n";
    }
    return 0;
}