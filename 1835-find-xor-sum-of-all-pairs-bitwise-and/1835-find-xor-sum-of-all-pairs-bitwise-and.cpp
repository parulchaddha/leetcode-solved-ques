class Solution {
public:
    int getXORSum(vector<int>& arr1, vector<int>& arr2) {
         int x=0;
        for(auto a : arr2)
            x^=a;
        int y=0;
        for(auto a : arr1)
            y^=a;
        return x&y;
    }
};