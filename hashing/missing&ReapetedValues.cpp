#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid ){
    vector<int> ans;
    unordered_set<int> s;

    int n = grid.size();
    int a,b;

    int expSum =0, actualSum = 0;

    // repeated value
    for(int i =0; i<n; i++){
        for(int j =0 ; j<n ; j++){
            actualSum += grid[i][j];

            if(s.find(grid[i][j]) != s.end()){
                a = grid[i][j];
                ans.push_back(a);
            }
            s.insert(grid[i][j]);
        }
    }

    // missing value
    expSum = (n*n) * (n*n +1)/2;
    b = expSum + a - actualSum;
    ans.push_back(b);

    return ans;

}

int main(){
    vector<vector<int>> vec = {{9,1,7},{8,9,2},{3,4,6}};

    
    for(int i =0; i<vec.size(); i++){
        for(int j =0; j<vec.size(); j++){
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }

    cout<< "missing and repeated values are : ";

    for(int val:findMissingAndRepeatedValues(vec)){
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
