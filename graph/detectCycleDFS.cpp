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
        l[u].push_back(v);  // u--->v
        l[v].push_back(u);  // u<---v
    }

    // cycle detection in undirected graph using DFS  O(V+E)
    bool isCycleDFS(int src , int par, vector<bool> & vis){   
        vis[src] = true;
        list<int> neighbors = l[src];

        for(int v : neighbors){
            if(!vis[v]){
                if(isCycleDFS(v,src,vis)) return true;
            }
            else if(v != par) return true;
        }
        return false;
    } 

    bool isCycle(){
        vector<bool> vis(V,false);
        
        for(int i =0 ; i <V;i++ ){
            if(!vis[i]){
                if(isCycleDFS(i,-1,vis)) return true;
            }
        }
        return false;
    }
};

int main(){
    Graph g(5);

    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(0,3);
    g.addEdge(1,2);
    g.addEdge(3,4);

    cout<< g.isCycle() << endl;

    return 0;

}