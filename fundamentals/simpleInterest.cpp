#include <iostream>
using namespace std;
int main(){
    double p,r,t;
    cout<< "enter principle : " << endl;
    cin>> p ;
    cout<< "enter rate of interest : "<< endl;
    cin>> r ;
    cout<< "enter time period : " << endl; 
    cin>> t ; 
    double SI = (p*r*t)/100 ;
    cout<< "Simple Interest is : " << SI << endl;
    return 0;
}
