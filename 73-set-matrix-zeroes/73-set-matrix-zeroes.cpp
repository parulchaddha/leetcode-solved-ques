class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int R=matrix.size();
        int C=matrix[0].size();
        vector<int> row(R,1);
        vector<int> col(C,1);
        for(int i = 0;i<R;i++){
              for(int j = 0;j< C;j++){
                  if(matrix[i][j]==0){
                      row[i]=0;
                      col[j]=0;
                  }
                      
             }
        }
        
        for(int i = 0;i<R;i++){
              for(int j = 0;j< C;j++){
                  if(row[i]==0 || col[j]==0){
                      matrix[i][j]=0;
                  }
                      
              }
        }
    }
};
 