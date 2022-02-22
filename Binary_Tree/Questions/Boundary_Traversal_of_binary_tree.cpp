// https://practice.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1/#

/** Approach:  TC = O(N)  SC = O(Height of tree) **/

class Solution {
public:

    void traverseLeft(Node* root, vector<int> &ans){
        
        // base case
        if((root==NULL) || (root->left==NULL && root->right==NULL)){
            return;
        }
        
        ans.push_back(root->data);
        
        if(root->left){
            traverseLeft(root->left,ans);
        }else{
            traverseLeft(root->right,ans);
        }
    }
    
    
    void traverseLeaf(Node* root, vector<int> &ans){
        
        if(root==NULL) return;
        
        // if leaf node, store its value
        if(root->left==NULL && root->right==NULL){
            ans.push_back(root->data);
        }
        
        traverseLeaf(root->left,ans);
        traverseLeaf(root->right,ans);
    }
    
    void traverseRight(Node* root, vector<int> &ans){
        
        // base case
        if((root==NULL) || (root->left==NULL && root->right==NULL)){
            return;
        }
        
        if(root->right){
            traverseRight(root->right,ans);
        }else{
            traverseRight(root->left,ans);
        }
        
        ans.push_back(root->data);
        
    }
    
    vector <int> boundary(Node *root)
    {
        vector<int> ans;
        if(root==NULL) return ans;
        
        // first add the root node data
        ans.push_back(root->data);
        
        // left part (excluding the leaf)
        traverseLeft(root->left,ans);
        
        // all the leaf nodes (do it separetely as main root node may repeat in some test cases)
        // first of left subtree
        traverseLeaf(root->left,ans);
        
        // second of right subtree
        traverseLeaf(root->right,ans);
        
        // right part in reverse order(excluding the leaf node)
        traverseRight(root->right,ans);
        
        
        return ans;
        
    }
};