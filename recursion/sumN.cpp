#include <iostream>
#include <vector>
using namespace std;

int sum(int n){ // recursive function
    if(n == 1){ 
        return 1;
    }

    return n + sum(n-1);
}

int main(){
    cout << sum(10);
    return 0;
}