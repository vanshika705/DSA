#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& vec, int target ){
    unordered_map<int,int> m ;
    vector<int> ans;

    for(int i =0 ; i<vec.size(); i++){
        int first = vec[i];
        int second = target - first;

        if(m.find(second)!= m.end()){
            ans.push_back(i);
            ans.push_back(m[second]);
            break;
        }    
        m[first]= i;
    }
    return ans;
}

int main(){
    vector<int> vec = {5,2,11,7,15};

    int target=9;

    for(int val:vec){
        cout << val << " ";
    }
    cout << endl;

    cout<< "index of two sum pair is : ";
    for(int val:twoSum(vec,target)){
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
