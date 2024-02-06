#include <iostream>
#include <vector>

using namespace std;

typedef vector<vector<vector<int>>> GRAPH;

void add_weighted_edge(GRAPH& graph , int from , int to , int cost){

    graph[from][to].push_back(cost);
}

void print(GRAPH& graph){

    for(int from = 0 ; from < graph.size() ; from++)

        for(int to = 0 ; to < graph[from].size(); to++)

            for (int w = 0 ; w < graph[from][to].size() ; w++)

                cout<<"From "<<from<<" to "<<to<<" the cost is "<<graph[from][to][w]<<endl;
}

int main(){

    int nodes , edges;
    cin>>nodes>>edges;

    GRAPH graph(nodes , vector<vector<int>>(nodes));

    for(int e = 0 ; e < edges ; e++){

        int from , to , cost;
        cin>>from>>to>>cost;

        add_weighted_edge(graph,from , to , cost);
    }

    print(graph);



    return 0;
}