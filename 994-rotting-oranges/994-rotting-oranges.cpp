class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        queue<pair<pair<int, int>, int>> q;
        for(int i = 0; i < n; i++) {
            for(int j= 0; j < m; j++) {
                if(grid[i][j] == 2){
                    q.push(make_pair(make_pair(i, j), 0));
                }
            }
        }
        int ans = 0;
        while(!q.empty()) {
            pair<pair<int, int>, int> p = q.front();
            q.pop();
            int i = p.first.first;
            int j = p.first.second;
            ans = max(ans, p.second);
            int dx[4] = {1, -1, 0, 0};
            int dy[4] = {0, 0, 1, -1};
            for(int r = 0; r < 4; r++) {
                int nx = i + dx[r];
                int ny = j + dy[r];
                if(nx < n && ny < m && nx >= 0 && ny >= 0 && grid[nx][ny] == 1) {
                    q.push(make_pair(make_pair(nx, ny), p.second+1));
                    grid[nx][ny] = 2;
                }
            }
        }
        for(int i = 0; i < n; i++) {
            for(int j= 0; j < m; j++) {
                if(grid[i][j] == 1){
                    return -1;
                }
            }
        }
        return ans;
    }
};