/*
    The whole difference between main1 and main2 is in how we initialize the 2D vector
*/

#include <iostream>
#include <vector>

using namespace std;

typedef vector<vector<int>> GRAPH;


void add_directed_edge(GRAPH& graph , int from , int to){

    graph[from].push_back(to);
}

void add_undirected_edge(GRAPH& graph , int from , int to){

    graph[from].push_back(to);
    graph[to].push_back(from);
}

void print_adjacency_matrix(GRAPH& graph){

    for(int i = 0 ; i < graph.size(); i++){

        cout<<"The node "<<i<<" has neighbours {";

        for(int j = 0 ; j < graph[i].size(); j++)
            cout<<graph[i][j]<<",";
        
        cout<<"}"<<endl;
    }
}

int main(){

    int nodes , edges;
    cin>>nodes>>edges;

    GRAPH graph(nodes);
    
    for(int e = 0 ; e < edges ; e++){

        int from , to ;
        cin>>from>>to;

        add_directed_edge(graph,from,to);
    }

    print_adjacency_matrix(graph);

    return 0;
}