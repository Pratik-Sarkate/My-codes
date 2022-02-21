// https://practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1#


/* Tree node structure  used in the program

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */




/*** Approach 1:  TC = O(N^2)   ***/

class Solution {
  private:
    int height(struct Node* node){
        
        // base case
        if(node==NULL) return 0;
        
        int left = height(node->left);      // height of left subtree
        int right = height(node->right);    // height of right subtree
        
        int ans = max(left,right) + 1;      // 1 added is root node
        return ans;
    }
    
  public:
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        
        // base case
        if(root==NULL) return 0;
        
        int opt1 = diameter(root->left);    // diameter in left subtree
        int opt2 = diameter(root->right);   // diameter in right subtree
        int opt3 = height(root->left) + height(root->right) + 1;    // diameter in both subtree
        
        return max(opt1,max(opt2,opt3));
    }
};




/*** Approach 2:  TC = O(N)   SC = O(Height) ***/

class Solution {
  private:
    pair<int,int> diameterFast(Node* root){
            
        // pair's first component will be diameter and second is height
        
        // base case
        if(root==NULL){
            pair<int,int> p = make_pair(0,0);
            return p;
        }
        
        pair<int,int> left = diameterFast(root->left);
        pair<int,int> right = diameterFast(root->right);
        
        int opt1 = left.first;
        int opt2 = right.first;
        int opt3 = left.second + right.second + 1;
        
        pair<int,int> ans;
        ans.first = max(opt1,max(opt2,opt3));
        ans.second = max(left.second,right.second) + 1;
        
        return ans;
    }
    
  public:
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        
        return diameterFast(root).first;
    }
};