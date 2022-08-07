/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
   void Connect(Node* parent, Node* root, int L){
		// if leaf node, we exit the loop
        if(root==NULL)  return;
		
		// to check if the node is a left child, we directly connect with right node
        if(L)   root->next = parent->right;
		
		// there can be two cases if it is right child
		// 1. its parent-> next is null, then this right child has next also null
		// 2. its parent-> next is not null, we can get the right node 
		// using the next connected to parent node
        else{
            if(parent->next==NULL)  root->next = nullptr;
            else    root->next = parent->next->left;
        }
		
		// then we call the same function for both the left and right child.
        Connect(root, root->left, 1);
        Connect(root, root->right, 0);
    }
    
    Node* connect(Node* root) {
		// if root is null, return null
        if(root==NULL)  return NULL;
		
		// the first root node will always have next as null.
        root->next=NULL;
		
		// then we call our connect function to traverse all nodes and connect them.
        Connect(root, root->left, 1);
        Connect(root, root->right, 0);
        return root;
        
    }
};