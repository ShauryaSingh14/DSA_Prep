#include <bits/stdc++.h>
using namespace std;
void dfsTrans(int node, vector<int> adj[], vector<int> &vis){
    vis[node] = 1;
    cout << node <<" ";
    
    for(auto neg : adj[node]){
        if(!vis[neg]){
            dfsTrans(neg,adj,vis);
        }
    }
}
// TC --> O(N) + O(2E) :: N for recurive calls & 2E for inner for loop which runs for number of degree
// SC --> O(3N)  
void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
int main(){
    int n,m; // n --> no. of nodes 
             // m --> no. of edges
    cin >> n ;
    vector<int> adj[n];
    addEdge(adj, 0, 2);
    addEdge(adj, 2, 4);
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 3);

    vector<int> vis(n,0);
    dfsTrans(0,adj,vis);
    
    
    return 0;
}