class Solution {
public:

    void dfs(int start, vector<vector<int>>& isConnected, vector<int> &vis){
        vis[start] = 1;
        int  n = isConnected[start].size();
        for(int connected = 0 ; connected < n ; connected++){ // V + 2E 
            if(isConnected[start][connected] == 1 && !vis[connected]){
                dfs(connected,isConnected,vis);
            }
        }
    }

    // Time Complexity : O(n) + O(V+2E) :: N for outer Loop & V+2E for inner loop
    // Space Complexity : O(2n) 
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> vis(n,0);
        int ans = 0;
        for(int i = 0 ; i< n ;i++){ // N 
            if(!vis[i]){
                dfs(i,isConnected,vis);
                ans++;
            }
        }
        return ans;
    }
};