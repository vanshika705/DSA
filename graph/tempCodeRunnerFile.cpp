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

    // DFS Traversal  O(V*E)
    void dfsHelper(int u , vector<bool> & vis){   
        cout<< u << " ";
        vis[u] = true;

        for(int v : l[u]){
            if(!vis[v]){
                dfsHelper(v,vis);
            }
        }
    } 
    
    void dfs(){
        int src = 0;
        vector<bool> vis(V,false);

        dfsHelper(src, vis);
        cout << endl;
    }
};

int main(){
    Graph g(5);

    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,4);

    cout<< "dfs : ";
    g.dfs();

    return 0;

}