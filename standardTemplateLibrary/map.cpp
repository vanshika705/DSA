#include <iostream>
#include <map>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
    map<string,int> m;

    m["tv"] = 100;
    m["laptop"] =30;
    m["phone"] = 50;

    m.insert({"camera",45});
    m.emplace("tablet", 37);

    m.erase("tv");
    
    for(auto p: m){
            cout<< p.first << " " << p.second << endl;
    }

    cout << m.count("laptop") << endl;

    if(m.find("camera") != m.end()){
        cout << "found\n";
    }
    else { cout << "not found\n";}

    multimap<string,int> map;

    map.emplace("tv",100);
    map.emplace("tv",100);
    map.emplace("tv",100);
    map.emplace("tv",100);

    map.erase(map.find("tv"));

    for(auto p: map){
        cout<< p.first << " " << p.second << endl;
    }

    unordered_map<string, int> um;

    um.emplace("tv",100);
    um.emplace("laptop",200);
    um.emplace("fridge",300);
    um.emplace("watch",40);

    for(auto p: um){
        cout<< p.first << " " << p.second << endl;
    }


    return 0;
}