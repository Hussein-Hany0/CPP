#include <iostream>
#include <vector>

using namespace std;

typedef vector<vector<int>> GRAPH;

void add_directed_graph(GRAPH& graph , int from , int to){
    graph[from].push_back(to);
}


void DFS(GRAPH& graph , int node , vector<bool>& visited){

    visited[node] = 1;

    for(int neighbour : graph[node]){

        if(!visited[neighbour]){
            
            cout<<"We can reach "<<neighbour<<endl;

            DFS(graph , neighbour , visited);
        }
    }
}

void reachability(GRAPH& graph){

    for (int i = 0 ; i < graph.size() ; i++){

        vector<bool> visited(graph.size());

        cout<<"Reachable set of node "<<i<<" is "<<endl;

        DFS(graph,i,visited);
    }
}



int main(){

    int nodes , edges;
    cin>>nodes>>edges;

    GRAPH graph(nodes);

    for(int e = 0 ; e < edges ; e++){

        int from , to ;
        cin>>from>>to;

        add_directed_graph(graph, from , to);
    }    

    reachability(graph);
    

    vector<int> v{1 ,2 ,3 ,4};

    

    return 0;
}


/*
    Time complexity to a node  for rooted tree : O(v) -> where v : nodes
*/