#include<iostream>
#include<list>
#include<vector>
#include<queue>
using namespace std;

class Graph{
public: 
    int V;
    list<int> *l; // dynamic array ,int *arr , edges

    Graph(int V){
        this->V = V;
        l = new list<int> [V]  ; // arr = new int[V]; 
    }

    void addEdge(int u, int v){ 
        l[u].push_back(v);  // u--->v5
    }

    // cycle detection in directed graph using DFS O(V+E)
    bool isCycleDFS(int curr, vector<bool> &vis, vector<bool> &recPath){
        vis[curr] = true;
        recPath[curr] = true;

        for(int v : l[curr]){
            if(!vis[v]){
                if(isCycleDFS(v,vis, recPath)) return true;
            }
            else if(recPath[v]){
                return true;
            }
        }

        recPath[curr] = false;
        return false;
    }  
    
    bool isCycle(){
        vector<bool> vis(V,false);
        vector<bool> recPath(V,false);

        for(int i =0 ; i <V;i++ ){
            if(!vis[i]){
                if(isCycleDFS(i,vis, recPath)) return true;
            }
        }
        return false;
    }
};

int main(){
    Graph g(4);

    g.addEdge(1,0);
    g.addEdge(0,2);
    g.addEdge(2,3);
    g.addEdge(3,0);

    cout << g.isCycle()<< endl;

    return 0;

}