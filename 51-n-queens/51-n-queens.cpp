class Solution {
public:
    bool isSafe(int row,int col,vector<string>& curr,int& n){
        int i=row-1,j=col;
        while(i>=0){
            if(curr[i--][j]!='.')return false;
        }
        i=row-1,j=col-1;
        while(i>=0 && j>=0){
            if(curr[i--][j--]!='.')return false;
        }
        i=row-1,j=col+1;
        while(i>=0 && j<n){
            if(curr[i--][j++]!='.')return false;
        }
        return true;
        
    }
    void nQueen(int row,int& n,int remain,vector<vector<string>>& ans,vector<string>& curr){
        if(remain==n)ans.push_back(curr);
        if(row==n)return;
        for(int col=0;col<n;col++){
            if(isSafe(row,col,curr,n)){
                curr[row][col]='Q';
                nQueen(row+1,n,remain+1,ans,curr);
                curr[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> curr(n);
        string s="";
        for(int j=0;j<n;j++)s+='.';
        for(int i=0;i<n;i++)curr[i]=s;
        nQueen(0,n,0,ans,curr);
        return ans;
    }
};