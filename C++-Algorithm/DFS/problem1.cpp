#include <unordered_map>
#include <iostream>
#include <vector>

using namespace std;

typedef unordered_map<int , vector<int>> GRAPH;

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

    

    

    return 0;
}