#include<iostream>
#include <vector>
using namespace std;

// graph implementation using list  , space = O(2E)

int main(){
    int n , m; //node , edges
    cin >> n >> m;

    vecto<int> adj[n+1];

    for(int i = 0 ; i < m ; i++){
        int u , v;
        cin>> u >> v;

        adj[u].push_back(v);
        // comment below line in case of directed graph , space  is O(E)
        adj[v].push_back(u); 

    }

    return 0;
}


