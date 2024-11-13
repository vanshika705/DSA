#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "hello world";  // dynamic ==> runtime resize
    cout << str << endl;

    for (int i = 0; i <str.length(); i++){
        cout << str[i] << " ";
    }
    cout << endl;

    str = "vanshika";
    cout << str << endl;

    for(char ch : str){
        cout << ch << " ";
    }
    cout << endl;

    char chArr[] ="apna college"; //not dynamic
    // chArr = "hello"; // error

    string str1 = "hello";
    string str2 = "korea";

    string str3 = str1 + str2; // concatenation 
    cout << str3 << endl;

    cout << (str1 == str2) << endl; // comparison  
    cout << (str1 < str2) << endl; // comparison  
    cout << (str1 > str2) << endl; // comparison  

    string str4 ;
    cout << "enter string : ";
    getline(cin,str4);
    cout << str4<< endl;



    return 0;
}