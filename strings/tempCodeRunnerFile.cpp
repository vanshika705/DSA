#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int stringCompression(vector<char> & chars){  // O(n)
   int n = chars.size(), idx =0;

   for(int i =0; i <n ; i++ ){
        char ch = chars[i];
        int count = 0;

        while(i<n && ch == chars[i]){
            count ++ ;
            i ++;
        }

        if(count == 1)  chars[idx++] = ch;
        else { 
            chars[idx++] = ch;

            string s = to_string(count);

            for(char dig : s){
                chars[idx++] = dig;
            }
        }
        // i--;
    }
    chars.resize(idx);

    for(char val: chars){
            cout << val << " ";
        }
        cout << endl;

    return idx;

}
 
int main(){
    
    vector<char> chars = { 'a','a','a','b','c','c','c'};

    for(char val: chars){
        cout << val << " ";
    }
    cout << endl;

    cout << stringCompression(chars);

    return 0;
}