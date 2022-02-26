// https://practice.geeksforgeeks.org/problems/flatten-binary-tree-to-linked-list/1/

/** Approach: Using Morris Traversal -->  TC = O(n)  SC = O(1)  **/

class Solution
{
    public:
    void flatten(Node *root)
    {
        // using Morris Traversal, the flattening is same like preorder traversal just we have to change the linkings accordingly
        Node* curr = root;
        
        while(curr != NULL){
            
            if(curr->left){
                
                Node* prev = curr->left;
                while(prev->right){
                    prev = prev->right;
                }
                
                prev->right = curr->right;
                curr->right = curr->left;
                curr->left = NULL;
            }
            
            curr = curr->right;
        }
    }
};