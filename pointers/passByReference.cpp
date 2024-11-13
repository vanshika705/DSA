#include <iostream>
using namespace std;
 
//  pass by reference using pointers
// void changeA(int* ptr){ 
//     *ptr = 20;
// }
// int main(){
//     int a =10;
   
//     changeA(&a);
//     cout << "inside main function : " << a << endl;

//     return 0;
// }

// pass by reference using alias
void changeA(int &b){ 
    b = 20;
}
int main(){
    int a =10;
   
    changeA(a);
    cout << "inside main function : " << a << endl;

    return 0;
}