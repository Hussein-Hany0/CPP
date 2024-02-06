#include <iostream> 
#include <vector>

using namespace std;


        // 2D matrix representation
typedef vector<vector<int>> GRAPH; 

        // Add directed graph
void add_directed_edge(GRAPH& graph , int from , int to){
    graph[from][to] += 1; 
}


        // Add undirected graph
void add_undirected_edge(GRAPH& graph , int from , int to){
    graph[from][to] +=1;
    graph[to][from] +=1;
}


        // Print the matrix
void print_adjacency_matrix(GRAPH& graph){

    for(int i = 0 ; i < graph.size() ; i++){

        for(int j = 0 ; j < graph.size() ; j++){

            if(graph[i][j] == 0)
                continue;

            cout<<"From "<<i<<" to "<<j<<" There are "<<graph[i][j]<<" edges"<<endl;
        }
    }
}


        // Add weighted directed graph
void add_directed_weighted_edge(GRAPH& graph , int from , int to , int cost){
    graph[from][to] = cost;
}


        // Add weighted undirected graph
void add_undirected_weighted_edge(GRAPH& graph , int from , int to , int cost){
    graph[from][to] =cost;
    graph[to][from] =cost;
}


        // Print the weighted matrix
void print_adjacency_weighted_matrix(GRAPH& graph){

    for(int i = 0 ; i < graph.size() ; i++){

        for(int j = 0 ; j < graph.size() ; j++){

            if(graph[i][j] == 0)
                continue;

            cout<<"From "<<i<<" to "<<j<<" The cost is : "<<graph[i][j]<<endl;
        }
    }
}

int main(){
    
    int nodes , edges; 

    cin>>nodes>>edges;

    GRAPH graph1(nodes , vector<int>(nodes));

    GRAPH graph2(nodes , vector<int>(nodes));

    for (int e = 0 ; e < edges ; e++){

        int from , to ;

        cin>>from>>to;

        add_directed_edge(graph1 , from , to);
    }

    for (int e = 0 ; e < edges ; e++){

        int from , to , cost ;

        cin>>from>>to>>cost;

        add_directed_weighted_edge(graph2 , from , to, cost);
    }

    print_adjacency_matrix(graph1);

    print_adjacency_weighted_matrix(graph2);
}