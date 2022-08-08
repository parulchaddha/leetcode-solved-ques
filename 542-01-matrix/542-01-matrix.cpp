class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
         int row = mat.size();
        int col = mat[0].size();
        
        queue<pair<int,int>> q; //i,j
        
        //1. adding all the positions of i&j which are 0 into the queue
        //2. marking all the 1's as -1 (which indicate some work needs to be done)
        
        for(int i = 0; i<row; i++){
            for(int j = 0; j<col; j++){
                if(mat[i][j] == 0){
                    q.push({i,j});
                }else{
                    mat[i][j] = -1;
                }
            }
        }
        
        //direction array for 4 directions
        vector<vector<int>> dir = {{-1,0},{1,0},{0,1},{0,-1}};
        
        //while queue is not empty
        //update the cell which has -1 in it with 1+value of current cell
        while(!q.empty()){
            pair<int,int> p = q.front();
            q.pop();
            int x = p.first, y = p.second;
            
            for(int i = 0; i<4; i++){
                int nx = x+dir[i][0];
                int ny = y + dir[i][1];
                
                if(nx >= 0 && nx < row && ny >= 0 && ny < col && mat[nx][ny] == -1){
                    mat[nx][ny] = 1+ mat[x][y];
                    q.push({nx,ny});
                }
            }
        }
        
        return mat;
    }
};