#include <iostream>
using namespace std;
int main(){
    int n ,i,j;
    cout << "enter number of rows : ";
    cin >> n;
    //   top part 
    for (i =0; i<n; i++){
    //    1st triangle
        for (j =0; j<=i; j++){
            cout << "*";
            
        }
        //  spaces
        for (j =0; j<n-i-1; j++){
            cout << " ";
            
        }
       
        for (j =0; j<n-i-1; j++){
            cout << " ";
            
            }
            //  2nd triangle
        for (j =0; j<i+1; j++){
                cout << "*";
                
            }

        cout << endl;
    }
    // bottom part 

    for (i =0; i<n; i++){
    //    1st triangle
        for (j =0; j< n-i; j++){
            cout << "*";
            
        }
        //  spaces
        for (j =0; j<i; j++){
            cout << " ";
            
        }
       
        for (j =0; j<i; j++){
            cout << " ";
            
            }
        //     //  2nd triangle
        for (j =0; j<n-i; j++){
                cout << "*";
                
            }

        cout << endl;
    }
    return 0;
}