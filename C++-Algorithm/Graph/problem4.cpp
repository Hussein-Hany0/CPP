#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

struct edge {
    
    string to;
    int cost;

    //edge(string to , int cost) : to(to) , cost(cost) {}
};

typedef map<string , multiset<edge>> GRAPH;

void add_directed_edge(GRAPH& graph , string from  , string to , int cost){

    graph[from].insert({to , cost});
}

void print(GRAPH& graph){

    for(auto node : graph){

        cout<<"node "<<node.first<<endl;

        for(auto e : node.second)
            cout<<e.to<<" "<<e.cost<<endl;
    }
}

int main(){

    

    

    return 0;
}