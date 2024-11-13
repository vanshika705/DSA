#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comparator(pair<int,int> p1, pair<int,int> p2) {
    if(p1.second < p2.second){
        return true;
    }
    if(p1.second >p2.second){
        return false;
    }
    if(p1.first < p2.first){
        return true;
    }
    else return false;

}

int main(){
    int arr[5] = { 3,8,4,5,9};
    sort(arr,arr+5);

    for(int val:arr){
        cout << val << " ";
    }
    cout << endl;

    sort(arr,arr+5, greater<int>()); // descending order 

    for(int val:arr){
        cout << val << " ";
    }
    cout << endl;

    vector<int> vec = { 6,3,8,9,3};
    sort(vec.begin(),vec.end());

    for(int val:vec){
        cout << val << " ";
    }
    cout << endl;

    vector<pair<int,int>> vec2 = {{3,1},{2,1},{7,1},{5,3}};
    sort(vec2.begin(),vec2.end()); // acc to 1st value

    for(auto p :vec2){
        cout << p.first << " " << p.second << endl;
    }
   
    sort(vec2.begin(),vec2.end(), comparator); // acc to 2nd value

    for(auto p :vec2){
        cout << p.first << " " << p.second << endl;
    }
    


    return 0;
}