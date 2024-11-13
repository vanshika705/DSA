#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string remove(string str, string part){  // O(n)

    while(str.length() >0  && str.find(part) < str.length()){
       
        str.erase(str.find(part),part.length());
    }
    return str;
}

int main(){
    
    string str = "daabcbaabcbc";
    string part = "abc";
    cout << str << endl;
    cout << part<< endl;

    


    cout << remove(str,part);

    
    
    return 0;
}