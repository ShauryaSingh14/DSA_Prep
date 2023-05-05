#include <bits/stdc++.h>
using namespace std;
void createMatrix(int n,m){
  int adjMatrix[n][n];
    for(int i = 0 ; i< m ;i++){
        int u, v; // two endes of edge
        cin >> u >> u;
        adjMatrix[u][v] = 1;
        adjMatrix[v][u] = 1; // this will be not there for directed one
    }

    // Space Complexity : O(n*n)
}
void createList(int n , int m){
    vector<int> adjList[n];
    for(int i =0 ;i<m ;i++){
        int u, v; // two endes of edge
        cin >> u >> u;
        adjList[u].push_back(v);
        adjList[v].push_back(u); // this will be not there for directed one
    }
     // Space Complexity : O(2 m) double of no. edges for Undirected One  
     // Space Complexity : O(m) no. edges for directed One  
}
int main(){
    int n,m; // n --> no. of nodes 
             // m --> no. of edges
    cin >> n >> m;
    createMatrix(n,m);
    createList(n,m);
    
    
    return 0;
}