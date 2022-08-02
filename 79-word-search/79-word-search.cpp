class Solution {
public:
bool solve(vector<vector<char>>& board, string word, int i, int j, int n, int m, int wordI)
{
    if(wordI==word.length())
    {
        return true;
    }
    if(i<0||i>=n||j<0||j>=m||word[wordI]!=board[i][j])
        return false;
    
    char letter=board[i][j];
    board[i][j]='0';
    
    //if from any of the side we found the character of the word move to that side and return true that means there is word go there, reach base condn. and return me true
    bool found= solve(board,word,i,j+1,n,m,wordI+1)||   
        solve(board,word,i+1,j,n,m,wordI+1)||
        solve(board,word,i-1,j,n,m,wordI+1)||
        solve(board,word,i,j-1,n,m,wordI+1);
    
    board[i][j]=letter;  //backtracking
    return found;
}
bool exist(vector<vector<char>>& board, string word) {
    
    int n=board.size();
    int m=board[0].size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        { 
            if(board[i][j]==word[0]&&solve(board,word,i,j,n,m,0))
             return true;
        }
    }  
    return false;
}
};