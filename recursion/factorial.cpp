#include <iostream>
#include <vector>
using namespace std;

int factorial(int n){ // recursive function
    if(n == 0){ 
        return 1;
    }

    return n * factorial(n-1);
}

int main(){
    cout << factorial(5);
    return 0;
}