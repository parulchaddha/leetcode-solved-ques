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
    void in_order( TreeNode* root, vector<int>& ans){ 
        //base case
        if(root == NULL) 
            return;
        
        //rec call        
        in_order(root->left, ans);
        ans.push_back(root->val);
        in_order(root->right, ans);
   
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        in_order(root, ans);
        return ans;
    }
};
