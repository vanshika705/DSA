#include <iostream>
#include <string.h>
using namespace std;

int main(){

    char str[] = {'a','b','c','\0'};

    // char str[] = "hello"; // string literals

    cout << str << endl;  // constant pointers
    cout << str[2] << endl;

    cout << strlen(str) << endl;

    char str2[10];

    cout << "enter your characters of string : ";
    // cin>> str2;
    // cin.getline(str2,100,'$');
    cin.getline(str2,10);
    cout << str2 << endl;

    for(char ch : str2){
        cout << ch << " ";
    }
    cout << endl;

    int len =0;
    for(int i =0; i <str2[i] != '\0'; i++){
        len++;
    }
    cout << "length of string : "<< len << endl;



    return 0;
}