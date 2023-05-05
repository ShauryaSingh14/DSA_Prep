#include <bits/stdc++.h>
using namespace std;


void bfsTrans(int n, vector<int> adj[], vector<int>& vis){
    queue<int> q;
    vis[n] = 1;
    q.push(n);
    
    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout << node << " ";
        for(auto neg : adj[node]){
            if(!vis[neg]){
               q.push(neg);
               vis[neg] = 1;
            }
        }
    }
}

// TC --> O(N) + O(2E) :: N for Queue & 2E for inner for loop which runs for number of degree
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
    addEdge(adj, 0, 1);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 0, 4);

    vector<int> vis(n,0);
    bfsTrans(0,adj,vis);
    
    
    return 0;
}