class Solution {
public:
    void fill(vector<vector<int>>& image,int i , int j , int &c,int &color){
        if(i==image.size() || j == image[0].size() || i<0 || j<0 || image[i][j]!=c)
            return;
        image[i][j]=color;
        fill(image,i,j+1,c,color);
        fill(image,i+1,j,c,color);
        fill(image,i-1,j,c,color);
        fill(image,i,j-1,c,color);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int c = image[sr][sc];
        if(c!=color)
            fill(image,sr,sc,c,color);
        return image;
    }
};
