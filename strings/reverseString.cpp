#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void reverseCharArray( vector<char>& str){

    int start =0 , end = str.size() -1;

    while(start < end){
        swap(str[start++],str[end--]);
    }
}
int main(){
    vector<char> str = {'h','e','l','l','o','\0'};
    
    cout << "your array is : ";
    for(char ch :str){
        cout << ch << " ";
    }
    cout << endl;

    reverseCharArray(str);

    cout << "array after reversing  : ";
    for(char ch :str){
        cout << ch << " ";
    }
    cout << endl;

    string s = "apna college";
    cout << s<< endl;

    reverse(s.begin(),s.end()); // iterators
    cout << s << endl;
    return 0;
}