#include <iostream>
#include <vector>
using namespace std;

int main(){
    pair<int, int> p = {1,2};

    cout << p.first << endl;
    cout << p.second << endl;

    pair<int, pair<char,int>> p2 = { 1,{'A',3}};

    cout << p2.first << endl;
    cout << p2.second.first << endl;

    vector<pair<int,int>> vec = {{1,2}, {3,4},{5,6}};

    vec.push_back({7,8}); // insert at already existing pair
    vec.emplace_back(9,10); // in- place objects create

    for(pair<int,int> p : vec){
        cout << p.first << " " << p.second << endl;
    }




    return 0;
}