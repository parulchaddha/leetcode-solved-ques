class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int row = matrix.size();
        int col= matrix[0].size();
        
        int count = 0;
        int total = row * col;
        //index initialisation
        int sr=0;
        int sc=0;
        int er=row-1;
        int ec=col-1;
        
        while(count<total){
            
            //print starting row
            for(int index=sc;count<total && index<=ec;index++){
                ans.push_back(matrix[sr][index]);
                count++;
            }
            sr++;
             //print ending column
            for(int index=sr;count<total && index<=er;index++){
                ans.push_back(matrix[index][ec]);
                count++;
            }
            ec--;;
             //print ending row
            for(int index=ec;count<total && index>=sc;index--){
                ans.push_back(matrix[er][index]);
                count++;
            }
            er--;
             //print starting column
            for(int index=er;count<total && index>=sr;index--){
                ans.push_back(matrix[index][sc]);
                count++;
            }
            sc++;
        }
        return ans;
    }
};