#include <unordered_set> 
#include <iostream>
#include <vector>

using namespace std;

typedef vector<unordered_set<int>> GRAPH;

void add_undirected_edge(GRAPH& graph , int from , int to){

    graph[from].insert(to);
}

void print(GRAPH& graph){

    for (int i = 0 ; i < graph.size() ; i++){

        for (auto j : graph[i])
            cout<<"there is node form "<<i<<" to "<<j<<endl;
    }
}

bool is_exist(GRAPH& graph , int from , int to){

    auto it = graph[from].find(to);

    //unordered_set<int>::iterator it = graph[from].find(to);

    if(it != graph[from].end())
        return true;

    return false;
}

int main(){

    int node , edge;
    cin>>node>>edge;

    GRAPH graph(node);

    for(int i = 0 ; i < edge ; i++){

        int from , to;
        cin>>from>>to;

        add_undirected_edge(graph , from , to);
    }

    print(graph);

    cout<<"The result is : "<<is_exist(graph , 1 , 0);
}

