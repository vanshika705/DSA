#include <iostream>
#include <vector>
using namespace std;

string primeNumber(int n){

    for(int i =2; i*i<=n; i++){
        if(n%2==0) return "non prime";
    }
    return "prime number";
}

int countPrime(int n){
    vector<bool> isPrime(n+1, true);
    int count = 0;

    for(int i =2; i<n; i++){
        if(isPrime[i]) {
            count++ ;

            for(int j = i*2; j<n; j= j+i){
                isPrime[j] = false;
            }
        }
    }
    return count;
}

int main(){
    int n ;
    cout << "enter a number : ";
    cin >>  n ;

    cout << primeNumber(n) << endl;
    cout << countPrime(n);

    return 0;
}