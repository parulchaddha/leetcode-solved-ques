class Solution {
    public:
    int maxarea(vector<vector<int>>& grid,int i , int j , vector<vector<bool>> &seen){
        if(i>=grid.size() || i<0 || j<0 ||j>=grid[0].size() || seen[i][j] || grid[i][j]==0)
            return 0;
        seen[i][j]= true;
        return (1+maxarea(grid,i+1,j,seen) + maxarea(grid,i-1,j,seen)+ maxarea(grid,i,j+1,seen)+maxarea(grid,i,j-1,seen));
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxi=0;
        vector<vector<bool>> seen (grid.size(),vector<bool>(grid[0].size(),false));
         for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[0].size(); j++)
        {
            maxi = max(maxi, maxarea(grid, i, j,seen));
        }
    }

    return maxi;
    }
};
