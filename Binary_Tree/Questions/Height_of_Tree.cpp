// https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1#


/** Approach: TC = O(N)  SC = O(Height)**/

class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        
        // base case
        if(node==NULL) return 0;
        
        int left = height(node->left);      // height of left subtree
        int right = height(node->right);    // height of right subtree
        
        int ans = max(left,right) + 1;      // 1 added is root node
        return ans;
    }
};