#include <iostream>
#include <vector>
#include <queue>


using namespace std;

struct edge {
    int from;
    int to;
    int cost;

    edge(int f, int t , int c) : from(f) ,to(t) , cost (c){};

};

typedef vector<edge> GRAPH;  

void add_edge(GRAPH& graph , int from , int to , int cost){

    graph.push_back(edge(from, to , cost));

    // graph.push_back({from , to , cost});
}

void print(GRAPH& graph){

    for (int i = 0 ; i < graph.size() ; i++)
        cout<<"The node "<<graph[i].from<<" has relationship with node "<<graph[i].to<<" with cost "<<graph[i].cost<<endl;
}


int main(){
    
    int edges;

    GRAPH graph;


    for(int i = 0 ; i < edges ; i++){

        int from , to , cost;
        cin>>from>>to>>cost;

        add_edge(graph,from,to,cost);
    }

    print(graph);

    return 0;
}



/*
    space complexity = O(E) , E -> number of edges

    void add_edge() = O(1)

    void print()    = O(E) , E -> number of edges
*/