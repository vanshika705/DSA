#include<iostream>
#include<list>
#include<vector>
using namespace std;

class Graph{
public: 
    int V;
    list<int> *l; // dynamic array ,int *arr

    Graph(int V){
        this->V = V;
        l = new list<int> [V]  ; // arr = new int[V]; 
    }

    void addEdge(int u, int v){  // u---v
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void printAdjList(){
        for(int i =0 ; i < V; i++){
            cout << i << " : ";
            for(int neigh : l[i]){
                cout << neigh << " ";
            }
            cout << endl;
        }
    }
};

int main(){
    Graph g(5);

    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,3);
    g.addEdge(2,4);

    g.printAdjList();
    // 0 : 1 
    // 1 : 0 2 3 
    // 2 : 1 3 4 
    // 3 : 1 2 
    // 4 : 2 

    return 0;

}