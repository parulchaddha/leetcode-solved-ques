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
    void traverse(TreeNode*root,vector<int> &v){
        if(root==NULL)
            return ;
        traverse(root->left,v);
        v.push_back(root->val);
        traverse(root->right,v);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> vec;
        traverse(root,vec);
        int n = vec.size();
        int s=0,e=n-1;
        while(s<e){
            if(vec[s]+vec[e]==k)
                return true;
            else if (vec[s]+vec[e]<k)
                s++;
            else
                e--;
        }
        return false;
    }
}; 
    
   