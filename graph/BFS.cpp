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

    // BFS Traversal  O(V+E)
    void bfs(){
        queue<int> q;
        vector<bool> vis(V,false);

        q.push(0);
        vis[0] = true;

        while(q.size()>0){
            int u = q.front();
            q.pop();

            cout << u << " ";

            for(int v : l[u]){ //v->immediate neighbor
                if(!vis[v]){
                    vis[v]=true;
                    q.push(v);
                }

            }
        }
        cout<< endl;
    }    
};

int main(){
    Graph g(5);

    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,3);
    g.addEdge(2,4);

    cout<< "bfs : ";
    g.bfs();

    return 0;

}