#include<iostream>
using namespace std;

// graph implementation using matrix , space is O(N * N)

int main(){
    int n , m; //node , edges
    cin >> n >> m;

    int adj[n+1][n+1];

    for(int i = 0 ; i < m ; i++){
        int u , v;
        cin>> u >> v;

        adj[u][v] = 1;

        // comment below line in case of directed graph  
        adj[v][u] = 1;
    }

    return 0;
}


