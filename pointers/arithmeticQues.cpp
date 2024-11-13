#include <iostream>
using namespace std;
int main(){
    int arr[] = {10,20,30,40};
    int *p = arr;

    cout << *(p + 1) << endl;
    cout << *(p + 3)<< endl;
    p++;
    cout << *p<< endl;

    return 0;
}