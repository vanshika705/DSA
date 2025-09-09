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
        l[v].push_back(u);  // u<---v
    }

    // cycle detection in undirected graph using BFS  O(V+E)
    bool isCycleBFS(int src, vector<bool> &vis){
        queue<pair<int,int>> q;

        q.push({src,-1});
        vis[src] = true;

        while(q.size()>0){
            int u = q.front().first;
            int parU = q.front().second;
            q.pop();

            list<int> neighbors = l[u];
            for(int v : neighbors){ //v->immediate neighbor
                if(!vis[v]){
                    vis[v]=true;
                    q.push({v,u});
                }
                else if(v != parU){
                    return true;
                }

            }
        }
        return false;
    }  
    
    bool isCycle(){
        vector<bool> vis(V,false);
        
        for(int i =0 ; i <V;i++ ){
            if(!vis[i]){
                if(isCycleBFS(i,vis)) return true;
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

    cout << g.isCycle()<< endl;

    return 0;

}