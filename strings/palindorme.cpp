#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool isAlphNum(char ch){  
    if((ch >= '0' && ch <= '9') ||  (tolower(ch) >= 'a' &&  tolower(ch) <= 'z'))
        return true;
    return false;
}

bool isPalindrome(string str){  // O(n)

    int start =0 , end = str.size() -1;
    while(start < end){
        if(!isAlphNum(str[start])) {
            start ++ ; continue;
        }
        if(!isAlphNum(str[end])) {
            end-- ; continue;
        }
        if(tolower(str[start]) != tolower(str[end])){
            return false;
        }
        start++ ; end-- ;
    }
    return true;
}

int main(){
    
    string str = "Ac3?e3c&a";
    cout << str << endl;

    cout << isPalindrome(str);

    
    
    return 0;
}