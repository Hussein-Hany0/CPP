#include <iostream>
#include <vector> 
#include <queue>

using namespace std;

void add_directed_edge(vector<vector<int>>& graph , int from , int to){

    graph[from].push_back(to);
}

void bfs (vector<vector<int>>& graph , int start){

    vector<int> visited (graph.size() , 0) ;

    queue<int> q;

    q.push(start);

    while(!q.empty()){

        int vertex = q.front();

        q.pop();

        if(visited[vertex] == 0)
            visited[vertex] = 1;

        cout<<vertex<<" ";

        for (int i = 0 ; i < graph[vertex].size() ; i++){

            int neighbour = graph[vertex][i];

            if(visited[neighbour] == 0)
                q.push(neighbour);

            
        }
    }
}


void print_path (vector<vector<int>>& graph , int goal , int start = 0){

    vector<int> visited (graph.size() , 0) ;

    queue<int> q;

    q.push(start);

    int vertex;

    while(!q.empty()){

        vertex = q.front();

        q.pop();

        if(visited[vertex] == 0)
            visited[vertex] = 1;

        if(vertex == goal)
            break;

        for (int i = 0 ; i < graph[vertex].size() ; i++){

            int neighbour = graph[vertex][i];

            if(visited[neighbour] == 0)
                q.push(neighbour);

            
        }
    }

    if(vertex == goal){

        cout<<"The path form 0 to "<<goal<<" is : ";

        for(int i = 0 ; i < visited.size() ; i++)
            if(visited[i] != 0)
                cout<<i<<" ";
    }

    else 
        cout<<"Not exist";
}

int main(){ٌ

    int nodes , edges;
    cin>>nodes>>edges;

    vector<vector<int>> graph (nodes);

    for(int i = 0 ; i < edges ; i++){

        int from , to;
        cin>>from>>to;

        add_directed_edge(graph , from , to);
    }

    while (true){

        int goal;
        cin>>goal;

        print_path(graph , goal );
    }





    return 0;
}