class Solution {
public:
    vector<vector<int>> v;
    void backtrack(vector<int> &res, int n , int k , int i ){
        if(k==0){
            v.push_back(res);
             return ;
        }
        while(i<=n && k>0){
            res.push_back(i);
            k--;
            backtrack(res,n,k,i+1);
            res.pop_back();
            k++;
            i++;
        }
    }
       
    vector<vector<int>> combine(int n, int k) {
        vector<int> res;
        backtrack(res,n,k,1);
        return v;
    }
};
