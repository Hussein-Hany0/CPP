#include <iostream>
#include <vector>

using namespace std;

struct edge {
    
    int to ;
    int cost;
    edge(int t , int c) : to(t) , cost(c) {}
};

typedef vector<vector<edge>> GRAPH;

void add_directed_edge(GRAPH& graph, int from , int to , int cost){

    graph[from].push_back(edge(to,cost));

    // graph[from].push_back({to,cost});
}

void add_undirected_edge(GRAPH& graph, int from , int to , int cost){

    graph[from].push_back(edge(to,cost));
    graph[to].push_back(edge(from,cost));
}

void print_adjacency_matrix(GRAPH& garph){

    for(int i = 0 ; i < garph.size(); i ++){

        cout<<"The node "<<i<<" has neighbours ";

        for(int j = 0 ; j < garph[i].size(); j++)
            cout<<" to "<<garph[i][j].to<<" with cost "<<garph[i][j].cost<<endl;
        
        cout<<endl;
    }
}


int main(){

    int nodes , edges;
    cin>>nodes>>edges;

    GRAPH graph(nodes);
    
    for(int e = 0 ; e < edges ; e++){

        int from , to , cost ;
        cin>>from>>to>>cost;

        add_directed_edge(graph,from,to,cost);
    }

    print_adjacency_matrix(graph);

    return 0;
}