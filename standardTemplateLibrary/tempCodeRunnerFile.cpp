#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    cout << max(5,9) << " "<< min(7,5) << endl;

    int a = 5, b= 34 ;
    swap(a,b);
    cout << a << " " << b << endl;

    vector<int> vec = { 1 ,2,3,4,5};

    cout << *(max_element(vec.begin(),vec.end())) << endl;
    cout << *(min_element(vec.begin(),vec.end())) << endl;

    cout << binary_search(vec.begin(),vec.end(), 3) << endl; 

    //  count set bits 

    int n = 15;
    long int p = 15;
    long long int s = 15;

    cout << __builtin_popcount(n)<< endl; //4B
    cout << __builtin_popcountl(p)<< endl; 
    cout << __builtin_popcountll(s)<< endl; 






    
    return 0;
}