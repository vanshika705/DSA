#include <iostream>
#include <vector>
using namespace std;

void printNum(int n){ // recursive function
    if(n == 1){ 
        cout << "1\n";
        return;
    }

    cout << n << " "; //n , n-1 ,n-2 ....
    printNum(n-1);
}

int main(){
    printNum(10);
    return 0;
}