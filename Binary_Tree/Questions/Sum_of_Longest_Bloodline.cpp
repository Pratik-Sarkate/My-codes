// https://practice.geeksforgeeks.org/problems/sum-of-the-longest-bloodline-of-a-tree/1#

/** Approach:  TC = O(n)   SC = O(n)  **/

class Solution
{
public:
    
    void solve(Node* root, int sum, int len, int &maxSum, int &maxLen){
        
        // base case
        if(root==NULL){
            
            if(len >= maxLen){
                maxLen = len;
                maxSum = max(maxSum,sum);
            }
            return;
        }
        
        sum = sum + root->data;
        
        solve(root->left,sum,len+1,maxSum,maxLen);
        solve(root->right,sum,len+1,maxSum,maxLen);
    }
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        int maxSum = 0, maxLen = 0;
        solve(root,0,0,maxSum,maxLen);
        
        return maxSum;
    }
};