#include <iostream>
#include <vector>
using namespace std;

int fibonacci(int n){ // recursive function
    if(n == 0 || n==1){ 
        return n;
    }

    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    cout << fibonacci(6);
    return 0;
}