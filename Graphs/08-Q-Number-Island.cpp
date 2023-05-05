class Solution {
public:
    void trans(int row,int col, vector<vector<int>> & vis,int delRow[],int delCol[],
            vector<vector<char>>& grid  ){
        vis[row][col] = 1;

        int n = grid.size();
        int m = grid[0].size();
        
        for(int i = 0 ; i< 4 ;i++){
            int nRow = row + delRow[i];
            int nCol = col + delCol[i];

            if( nRow >= 0 && nCol < m && nRow <n && nCol >= 0){
                if(!vis[nRow][nCol] && grid[nRow][nCol] == '1'){
                    trans(nRow,nCol,vis,delRow,delCol,grid);
                }
            }
        }

    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> vis(n,vector<int>(m,0));
        int delRow[] ={0,-1,0,1};
        int delCol[] = {-1, 0 , 1, 0};

        int count = 0;
        for( int i = 0 ; i< n ;i++){
            for(int j =0 ; j< m ;j++){
                if(!vis[i][j] && grid[i][j] == '1'){
                    trans(i,j,vis,delRow,delCol,grid);
                    count++;
                }
            }
        }
        return count ;
    }
};