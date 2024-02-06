#include <bits/stdc++.h>

using namespace std;

class Graph {
    
    private : 
        int v; 

        list<int> *adj;

        bool DLS (int v , int target , int limit);

    public : 
        Graph(int v);
        
        void add_edge(int v , int w);

        bool IDDFS(int v , int target , int max_depth);


};

Graph::Graph(int v){

    this->v = v;
    
    adj = new list<int>[v];
}

void Graph::add_edge(int v, int w){

    adj[v].push_back(w);
}

bool Graph::DLS(int scr , int target , int limit){

    if ( scr == target){

        cout<<" path : "<<target<<" ";
        
        return true;
    }

    if (limit <= 0)
        return false;

    for(auto i = adj[scr].begin(); i != adj[scr].end() ; i++){

        if(DLS(*i , target , limit-1) == true){

            cout<<scr<<" ";

            return true;
        }
    }

    return false;
}

bool Graph::IDDFS(int scr , int target , int max_dpeth){

    for (int i = 0 ; i < max_dpeth ; i++)
        if(DLS(scr , target , i ) == true)
            return true;

    return false;
    
}

int main(){

    Graph g(7);

    g.add_edge(0,1);
    g.add_edge(0,2);

    g.add_edge(1,3);
    g.add_edge(1,4);

    g.add_edge(2,5);
    g.add_edge(2,6);

    int target    = 6,
        max_depth = 3,
        scr       = 0;

    if(g.IDDFS(scr, target , max_depth) == true)
        cout<<"\nTarget is reachable from source within max depth";

    else 
        cout<<"\nTarget is not reachable form soruce within max dpeth";

    return 0;
}



















