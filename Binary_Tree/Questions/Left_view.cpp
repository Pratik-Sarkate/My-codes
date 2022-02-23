// https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1/

/** Approach: TC = O(n)  SC = O(Height of Tree)  **/

class Solution
{
    public:
    
    
    void solve(Node* root, vector<int> &ans, int level){
        
        if(root==NULL) return;
        
        // entered a new level
        if(level==ans.size()){
            ans.push_back(root->data);
        }
        
        solve(root->left,ans,level+1);
        solve(root->right,ans,level+1);
    }
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       	vector<int> ans;
       	solve(root,ans,0);
       	return ans;
    }
};