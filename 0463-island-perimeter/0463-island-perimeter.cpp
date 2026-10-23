class Solution {
public:
    // vector<vector<int>>directions{{1,0}{-1,0},{0,1},{0,-1}};
    void dfs(vector<vector<int>>& grid,int i, int j,int& peri){
        int m=grid.size(); // cloumn ki size
        int n=grid[0].size(); //row ki size
        if(i<0 || i>=m ||j<0 || j>=n || grid[i][j]==0){
            peri++;
            return;
        }
        if(grid[i][j]==-1){
            return;
        }
        grid[i][j]=-1;
        dfs(grid,i+1,j,peri); // bottom
        dfs(grid,i-1,j,peri); // top
        dfs(grid,i,j-1,peri); //left
        dfs(grid,i,j+1,peri); // right
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int m=grid.size(); // cloumn ki size
        int n=grid[0].size(); //row ki size
        int peri=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    dfs(grid,i,j,peri);
                    return peri;
                }
            }
        }
        return -1;
    }
};