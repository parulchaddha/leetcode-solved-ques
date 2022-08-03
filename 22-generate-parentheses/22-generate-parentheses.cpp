class Solution {
public:
    vector<string> generateParenthesis(int n) {
        backtrack("",n,0,0);
        return ans;
    }
     void backtrack(string curr, int n, int left, int right){
        if (curr.size() == 2 * n){
            ans.push_back(curr);
            return;
        }
        
        if (left < n){
            backtrack(curr + '(', n, left + 1, right);
        }
        if (left > right){
            backtrack(curr + ')', n, left, right + 1);
        }
    }
    
    vector<string> ans;
};