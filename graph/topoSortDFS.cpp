#include<iostream>
#include<list>
#include<vector>
#include<stack>
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
        l[u].push_back(v);  // only directed edge
    }

    // topological sorting in directed graph using DFS O(V+E)
    void dfs(int curr, vector<bool> &vis, stack<int> &s){
        vis[curr] = true;

        for(int v : l[curr]){
            if(!vis[v]){
                dfs(v,vis,s);
            }
        }

        s.push(curr);
    }
    
    void topoSort(){
        vector<bool> vis(V,false);
        stack<int> s;

        for(int i =0; i < V; i++){
            if(!vis[i]){
                dfs(i,vis, s);
            }
        }

        while(s.size()>0){
            cout<< s.top()<< " ";
            s.pop();
        }
    }
};

int main(){
    Graph g(6);

    g.addEdge(3,1);
    g.addEdge(2,3);
    g.addEdge(4,0);
    g.addEdge(4,1);
    g.addEdge(5,0);
    g.addEdge(5,3);


    g.topoSort();

    return 0;

}