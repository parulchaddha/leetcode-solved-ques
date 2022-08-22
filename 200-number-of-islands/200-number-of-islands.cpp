class Solution {
public:
    void solve(int i , int  j , int &m , int &n , vector<vector<char>> &v){
        if(i<0 || j<0 || i>=m ||j>=n || v[i][j] == '0')
            return ;
        v[i][j]='0';
        solve(i+1,j,m ,n,v);
        solve(i,j-1,m ,n,v);
        solve(i,j+1,m ,n,v);
        solve(i-1,j,m ,n,v);
    }
    int numIslands(vector<vector<char>>& v) {
        int ans=0;
        int i , j;
        int m = v.size(),n=v[0].size();
        for(int i =0;i<m;i++){
            for(int j =0;j<n;j++){
                if(v[i][j]=='1'){
                    ans++;
                    solve(i,j,m,n,v);
                }
            }
        }
        return ans;
    }
};
