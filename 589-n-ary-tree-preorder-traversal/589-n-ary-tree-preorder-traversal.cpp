/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int>v;
    void solve(Node* root){
        if(root==NULL)
            return;
        v.push_back(root->val);
        for(auto el: root->children){
            solve(el);
        }
        return;
    }
    vector<int> preorder(Node* root) {
        solve(root);
        return v;
    }
};/*vector<int> v;
    void preorde(Node* root){
        if(root==NULL) return;
        v.push_back(root->val);
        for(auto el:root->children){
            preorde(el);
        }
        return;
    }
    vector<int> preorder(Node* root) {
        preorde(root);
        return v;
    }*/