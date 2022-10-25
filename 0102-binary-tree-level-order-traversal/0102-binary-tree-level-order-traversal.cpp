/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int height(TreeNode * root){
        if(!root)
            return 0;
        int l = height(root->left);
        int r = height(root->right);
        return 1 +(l>r ? l : r);
    }
    void level(TreeNode * root,vector<vector<int>> &v,int high,int curr=0){
        if(!root || curr>high)
            return ;
        v[curr].push_back(root->val);
        level(root->left,v,high,curr+1);
        level(root->right,v,high,curr+1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        int high=height(root);
        vector<vector<int>> v(high);
        level(root,v,high-1);
        return v;
    }
};