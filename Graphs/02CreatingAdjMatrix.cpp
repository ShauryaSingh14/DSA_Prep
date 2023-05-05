#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m; // n --> no. of nodes 
             // m --> no. of edges
    cin >> n >> m;
    int adjMatrix[n][n];
    for(int i = 0 ; i< m ;i++){
        int u, v; // two endes of edge
        cin >> u >> u;
        adjMatrix[u][v] = 1;
        adjMatrix[v][u] = 1;
    }
    
    return 0;
}